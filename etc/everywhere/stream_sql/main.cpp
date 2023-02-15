#include "StreamSQLLexer.h"
#include "StreamSQLParser.h"
#include <cassert>
#include <map>
#include <string>
#include <iostream>

#define String std::string

static String parseCreateSchema(pANTLR3_BASE_TREE tree);
static String parseCreateStream(pANTLR3_BASE_TREE tree);
static String parseCreateWindow(pANTLR3_BASE_TREE tree);
static String parseSelect(pANTLR3_BASE_TREE tree);

static inline const char* getText(pANTLR3_BASE_TREE tree)
{
    return (const char*) tree->getText(tree)->chars;
}
/*
CREATE INPUT STREAM Packet PacketTuple;

CREATE OUTPUT STREAM Aggregate AggregateTuple;

CREATE SCHEMA PacketTuple (time INT,price DOUBLE );

CREATE SCHEMA AggregateTuple(

    time INT,

    maxprice DOUBLE ,

    currenttime INT);

CREATE WINDOW Dimension1(SIZE 180 ADVANCE 10 ON time);

SELECT max(price) AS maxprice, max(time) AS currenttime

FROM Packet[Dimension1] INTO Aggregate;


*/

int main(){
    pANTLR3_INPUT_STREAM input;
    pStreamSQLLexer lxr;
    pANTLR3_COMMON_TOKEN_STREAM tstream;
    pStreamSQLParser psr;

    std::string sqlStatement = "CREATE SCHEMA PacketTuple (time INT,price DOUBLE );";
    const char * inputString = sqlStatement.c_str();

    input = antlr3StringStreamNew((uint8_t *) inputString, ANTLR3_ENC_UTF8,

           strlen(inputString), (uint8_t *) "test_statement");

    lxr = StreamSQLLexerNew(input);

    tstream = antlr3CommonTokenStreamSourceNew(ANTLR3_SIZE_HINT,

           TOKENSOURCE(lxr));

    psr = StreamSQLParserNew(tstream);

    StreamSQLParser_statement_return statementAST = psr->statement(psr);
    /* get the AST root */
    pANTLR3_BASE_TREE root = statementAST.tree;

    pANTLR3_BASE_TREE treeNode;

    treeNode = (pANTLR3_BASE_TREE) root->getChild(root, 0);
    ANTLR3_UINT32 treeType = treeNode->getType(treeNode);

    std::string result;
    switch (treeType)
    {
    case TOK_CREATE_SCHEMA:
        result = parseCreateSchema(treeNode);
        break;

    case TOK_CREATE_STREAM:
        result = parseCreateStream(treeNode);
        break;

    case TOK_CREATE_WINDOW:
        result = parseCreateWindow(treeNode);
        break;

    case TOK_SELECT:
        result = parseSelect(treeNode);
        break;

    default:
        fprintf(stderr, "Unknown tree type = %d\n", treeType);
        break;
    }

    input->close(input);
    lxr->free(lxr);
    tstream->free(tstream);
    psr->free(psr);
}

String parseCreateSchema(pANTLR3_BASE_TREE tree){
    String str = getText(tree);
    printf("parseCreateSchema: %s\n", str.data());
    return str;
}
String parseCreateStream(pANTLR3_BASE_TREE tree){
    String str = getText(tree);
    printf("parseCreateStream: %s\n", str.data());
    return str;
}
String parseCreateWindow(pANTLR3_BASE_TREE tree){
    String str = getText(tree);
    printf("parseCreateWindow: %s\n", str.data());
    return str;
}
String parseSelect(pANTLR3_BASE_TREE tree){
    String str = getText(tree);
    printf("parseSelect: %s\n", str.data());
    return str;
}
