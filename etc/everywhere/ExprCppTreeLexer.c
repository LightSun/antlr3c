/** \file
 *  This C source file was generated by $ANTLR version 3.4
 *
 *     -  From the grammar source file : ./ExprCppTree.g
 *     -                            On : 2022-12-29 10:21:55
 *     -                 for the lexer : ExprCppTreeLexerLexer
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
*/
// [The "BSD license"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

/* -----------------------------------------
 * Include the ANTLR3 generated header file.
 */
#include    "ExprCppTreeLexer.h"
/* ----------------------------------------- */





/* MACROS that hide the C interface implementations from the
 * generated code, which makes it a little more understandable to the human eye.
 * I am very much against using C pre-processor macros for function calls and bits
 * of code as you cannot see what is happening when single stepping in debuggers
 * and so on. The exception (in my book at least) is for generated code, where you are
 * not maintaining it, but may wish to read and understand it. If you single step it, you know that input()
 * hides some indirect calls, but is always referring to the input stream. This is
 * probably more readable than ctx->input->istream->input(snarfle0->blarg) and allows me to rejig
 * the runtime interfaces without changing the generated code too often, without
 * confusing the reader of the generated output, who may not wish to know the gory
 * details of the interface inheritance.
 */

#define		CTX	ctx

/* Aids in accessing scopes for grammar programmers
 */
#undef	SCOPE_TYPE
#undef	SCOPE_STACK
#undef	SCOPE_TOP
#define	SCOPE_TYPE(scope)   pExprCppTreeLexer_##scope##_SCOPE
#define SCOPE_STACK(scope)  pExprCppTreeLexer_##scope##Stack
#define	SCOPE_TOP(scope)    ctx->pExprCppTreeLexer_##scope##Top
#define	SCOPE_SIZE(scope)		ctx->pExprCppTreeLexer_##scope##Stack_limit
#define SCOPE_INSTANCE(scope, i)	(ctx->SCOPE_STACK(scope)->get(ctx->SCOPE_STACK(scope),i))


/* Macros for accessing things in a lexer
 */
#undef	    LEXER
#undef	    RECOGNIZER
#undef	    RULEMEMO
#undef	    GETCHARINDEX
#undef	    GETLINE
#undef	    GETCHARPOSITIONINLINE
#undef	    EMIT
#undef	    EMITNEW
#undef	    MATCHC
#undef	    MATCHS
#undef	    MATCHRANGE
#undef	    LTOKEN
#undef	    HASFAILED
#undef	    FAILEDFLAG
#undef	    INPUT
#undef	    STRSTREAM
#undef	    LA
#undef	    HASEXCEPTION
#undef	    EXCEPTION
#undef	    CONSTRUCTEX
#undef	    CONSUME
#undef	    LRECOVER
#undef	    MARK
#undef	    REWIND
#undef	    REWINDLAST
#undef	    BACKTRACKING
#undef		MATCHANY
#undef		MEMOIZE
#undef		HAVEPARSEDRULE
#undef		GETTEXT
#undef		INDEX
#undef		SEEK
#undef		PUSHSTREAM
#undef		POPSTREAM
#undef		SETTEXT
#undef		SETTEXT8

#define	    LEXER					ctx->pLexer
#define	    RECOGNIZER			    LEXER->rec
#define		LEXSTATE				RECOGNIZER->state
#define		TOKSOURCE				LEXSTATE->tokSource
#define	    GETCHARINDEX()			LEXER->getCharIndex(LEXER)
#define	    GETLINE()				LEXER->getLine(LEXER)
#define	    GETTEXT()				LEXER->getText(LEXER)
#define	    GETCHARPOSITIONINLINE() LEXER->getCharPositionInLine(LEXER)
#define	    EMIT()					LEXSTATE->type = _type; LEXER->emit(LEXER)
#define	    EMITNEW(t)				LEXER->emitNew(LEXER, t)
#define	    MATCHC(c)				LEXER->matchc(LEXER, c)
#define	    MATCHS(s)				LEXER->matchs(LEXER, s)
#define	    MATCHRANGE(c1,c2)	    LEXER->matchRange(LEXER, c1, c2)
#define	    MATCHANY()				LEXER->matchAny(LEXER)
#define	    LTOKEN  				LEXSTATE->token
#define	    HASFAILED()				(LEXSTATE->failed == ANTLR3_TRUE)
#define	    BACKTRACKING			LEXSTATE->backtracking
#define	    FAILEDFLAG				LEXSTATE->failed
#define	    INPUT					LEXER->input
#define	    STRSTREAM				INPUT
#define		ISTREAM					INPUT->istream
#define		INDEX()					ISTREAM->index(ISTREAM)
#define		SEEK(n)					ISTREAM->seek(ISTREAM, n)
#define	    EOF_TOKEN				&(LEXSTATE->tokSource->eofToken)
#define	    HASEXCEPTION()			(LEXSTATE->error == ANTLR3_TRUE)
#define	    EXCEPTION				LEXSTATE->exception
#define	    CONSTRUCTEX()			RECOGNIZER->exConstruct(RECOGNIZER)
#define	    LRECOVER()				LEXER->recover(LEXER)
#define	    MARK()					ISTREAM->mark(ISTREAM)
#define	    REWIND(m)				ISTREAM->rewind(ISTREAM, m)
#define	    REWINDLAST()			ISTREAM->rewindLast(ISTREAM)
#define		MEMOIZE(ri,si)			RECOGNIZER->memoize(RECOGNIZER, ri, si)
#define		HAVEPARSEDRULE(r)		RECOGNIZER->alreadyParsedRule(RECOGNIZER, r)
#define		PUSHSTREAM(str)			LEXER->pushCharStream(LEXER, str)
#define		POPSTREAM()				LEXER->popCharStream(LEXER)
#define		SETTEXT(str)			LEXSTATE->text = str
#define		SKIP()					LEXSTATE->token = &(TOKSOURCE->skipToken)
#define		USER1					LEXSTATE->user1
#define		USER2					LEXSTATE->user2
#define		USER3					LEXSTATE->user3
#define		CUSTOM					LEXSTATE->custom
#define		RULEMEMO				LEXSTATE->ruleMemo
#define		DBG						RECOGNIZER->debugger

/* If we have been told we can rely on the standard 8 bit or UTF16 input
 * stream, then we can define our macros to use the direct pointers
 * in the input object, which is much faster than indirect calls. This
 * is really only significant to lexers with a lot of fragment rules (which
 * do not place LA(1) in a temporary at the moment) and even then
 * only if there is a lot of input (order of say 1M or so).
 */
#if	defined(ANTLR3_INLINE_INPUT_8BIT) || defined(ANTLR3_INLINE_INPUT_UTF16)

# ifdef	ANTLR3_INLINE_INPUT_8BIT

/* 8 bit character set */

#  define	    NEXTCHAR	((pANTLR3_UINT8)(INPUT->nextChar))
#  define	    DATAP	((pANTLR3_UINT8)(INPUT->data))

# else

#  define	    NEXTCHAR	((pANTLR3_UINT16)(INPUT->nextChar))
#  define	    DATAP	((pANTLR3_UINT16)(INPUT->data))

# endif

# define	    LA(n) ((NEXTCHAR + n) > (DATAP + INPUT->sizeBuf) ? ANTLR3_CHARSTREAM_EOF : (ANTLR3_UCHAR)(*(NEXTCHAR + n - 1)))
# define            CONSUME()                                           \
{                                                                       \
    if        (NEXTCHAR < (DATAP + INPUT->sizeBuf))                     \
    {                                                                   \
        INPUT->charPositionInLine++;                                    \
        if  ((ANTLR3_UCHAR)(*NEXTCHAR) == INPUT->newlineChar)           \
        {                                                               \
            INPUT->line++;                                              \
            INPUT->charPositionInLine        = 0;                       \
            INPUT->currentLine                = (void *)(NEXTCHAR + 1); \
        }                                                               \
        INPUT->nextChar = (void *)(NEXTCHAR + 1);                       \
    }                                                                   \
}

#else

// Pick up the input character by calling the input stream implementation.
//
#define	    CONSUME()   INPUT->istream->consume(INPUT->istream)
#define	    LA(n)       INPUT->istream->_LA(INPUT->istream, n)

#endif

#define		TOKTEXT(tok, txt)				tok, (pANTLR3_UINT8)txt

/* The 4 tokens defined below may well clash with your own #defines or token types. If so
 * then for the present you must use different names for your defines as these are hard coded
 * in the code generator. It would be better not to use such names internally, and maybe
 * we can change this in a forthcoming release. I deliberately do not #undef these
 * here as this will at least give you a redefined error somewhere if they clash.
 */
#define	    UP	    ANTLR3_TOKEN_UP
#define	    DOWN    ANTLR3_TOKEN_DOWN
#define	    EOR	    ANTLR3_TOKEN_EOR
#define	    INVALID ANTLR3_TOKEN_INVALID


/* =============================================================================
 * Functions to create and destroy scopes. First come the rule scopes, followed
 * by the global declared scopes.
 */



/* ============================================================================= */

/* =============================================================================
 * Start of recognizer
 */

/* Forward declare the locally static matching functions we have generated and any predicate functions.
 */
static ANTLR3_INLINE 
 void
	mT__12    (pExprCppTreeLexer ctx);
static ANTLR3_INLINE 
 void
	mT__13    (pExprCppTreeLexer ctx);
static ANTLR3_INLINE 
 void
	mPLUS    (pExprCppTreeLexer ctx);
static ANTLR3_INLINE 
 void
	mMINUS    (pExprCppTreeLexer ctx);
static ANTLR3_INLINE 
 void
	mTIMES    (pExprCppTreeLexer ctx);
static ANTLR3_INLINE 
 void
	mASSIGN    (pExprCppTreeLexer ctx);
static ANTLR3_INLINE 
 void
	mID    (pExprCppTreeLexer ctx);
static ANTLR3_INLINE 
 void
	mINT    (pExprCppTreeLexer ctx);
static ANTLR3_INLINE 
 void
	mNEWLINE    (pExprCppTreeLexer ctx);
static ANTLR3_INLINE 
 void
	mWS    (pExprCppTreeLexer ctx);
static ANTLR3_INLINE 
 void
	mTokens    (pExprCppTreeLexer ctx);
static void	ExprCppTreeLexerFree(pExprCppTreeLexer ctx);

/* =========================================================================
 * Lexer matching rules end.
 * =========================================================================
 */



static void
ExprCppTreeLexerFree  (pExprCppTreeLexer ctx)
{
    LEXER->free(LEXER);

    ANTLR3_FREE(ctx);
}

static void
ExprCppTreeLexerReset (pExprCppTreeLexer ctx)
{
    RECOGNIZER->reset(RECOGNIZER);
}

/** \brief Name of the grammar file that generated this code
 */
static const char fileName[] = "./ExprCppTree.g";

/** \brief Return the name of the grammar file that generated this code.
 */
static const char * getGrammarFileName()
{
	return fileName;
}

/** \brief Create a new lexer called ExprCppTreeLexer
 *
 * \param[in]    instream Pointer to an initialized input stream
 * \return
 *     - Success pExprCppTreeLexer initialized for the lex start
 *     - Fail NULL
 */
ANTLR3_API pExprCppTreeLexer ExprCppTreeLexerNew
(
pANTLR3_INPUT_STREAM
 instream)
{
	// See if we can create a new lexer with the standard constructor
	//
	return ExprCppTreeLexerNewSSD(instream, NULL);
}

/** \brief Create a new lexer called ExprCppTreeLexer
 *
 * \param[in]    instream Pointer to an initialized input stream
 * \param[state] state Previously created shared recognizer stat
 * \return
 *     - Success pExprCppTreeLexer initialized for the lex start
 *     - Fail NULL
 */
ANTLR3_API pExprCppTreeLexer ExprCppTreeLexerNewSSD
(pANTLR3_INPUT_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state)
{
    pExprCppTreeLexer ctx; // Context structure we will build and return

    ctx = (pExprCppTreeLexer) ANTLR3_CALLOC(1, sizeof(ExprCppTreeLexer));

    if  (ctx == NULL)
    {
        // Failed to allocate memory for lexer context
        return  NULL;
    }

    /* -------------------------------------------------------------------
     * Memory for basic structure is allocated, now to fill in
     * in base ANTLR3 structures. We initialize the function pointers
     * for the standard ANTLR3 lexer function set, but upon return
     * from here, the programmer may set the pointers to provide custom
     * implementations of each function.
     *
     * We don't use the macros defined in ExprCppTreeLexer.h here so you can get a sense
     * of what goes where.
     */

    /* Create a base lexer, using the supplied input stream
     */
    ctx->pLexer	= antlr3LexerNewStream(ANTLR3_SIZE_HINT, instream, state);

    /* Check that we allocated the memory correctly
     */
    if	(ctx->pLexer == NULL)
    {
		ANTLR3_FREE(ctx);
		return  NULL;
    }
    /* Install the implementation of our ExprCppTreeLexer interface
     */
    ctx->mT__12	= mT__12;
    ctx->mT__13	= mT__13;
    ctx->mPLUS	= mPLUS;
    ctx->mMINUS	= mMINUS;
    ctx->mTIMES	= mTIMES;
    ctx->mASSIGN	= mASSIGN;
    ctx->mID	= mID;
    ctx->mINT	= mINT;
    ctx->mNEWLINE	= mNEWLINE;
    ctx->mWS	= mWS;
    ctx->mTokens	= mTokens;

    /** When the nextToken() call is made to this lexer's pANTLR3_TOKEN_SOURCE
     *  it will call mTokens() in this generated code, and will pass it the ctx
     * pointer of this lexer, not the context of the base lexer, so store that now.
     */
    ctx->pLexer->ctx	    = ctx;

    /**Install the token matching function
     */
    ctx->pLexer->mTokens = (void (*) (void *))(mTokens);

    ctx->getGrammarFileName	= getGrammarFileName;
    ctx->free		= ExprCppTreeLexerFree;
    ctx->reset          = ExprCppTreeLexerReset;


    /* Return the newly built lexer to the caller
     */
    return  ctx;
}
/* =========================================================================
 * Functions to match the lexer grammar defined tokens from the input stream
 */

//   Comes from: 7:7: ( '(' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start T__12
 *
 * Looks to match the characters the constitute the token T__12
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mT__12(pExprCppTreeLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = T__12;


    // ./ExprCppTree.g:7:7: ( '(' )
    // ./ExprCppTree.g:7:9: '('
    {
        MATCHC('(');
        if  (HASEXCEPTION())
        {
            goto ruleT__12Ex;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleT__12Ex; /* Prevent compiler warnings */
    ruleT__12Ex: ;

}
// $ANTLR end T__12

//   Comes from: 8:7: ( ')' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start T__13
 *
 * Looks to match the characters the constitute the token T__13
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mT__13(pExprCppTreeLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = T__13;


    // ./ExprCppTree.g:8:7: ( ')' )
    // ./ExprCppTree.g:8:9: ')'
    {
        MATCHC(')');
        if  (HASEXCEPTION())
        {
            goto ruleT__13Ex;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleT__13Ex; /* Prevent compiler warnings */
    ruleT__13Ex: ;

}
// $ANTLR end T__13

//   Comes from: 19:5: ( '+' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start PLUS
 *
 * Looks to match the characters the constitute the token PLUS
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mPLUS(pExprCppTreeLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = PLUS;


    // ./ExprCppTree.g:19:5: ( '+' )
    // ./ExprCppTree.g:19:7: '+'
    {
        MATCHC('+');
        if  (HASEXCEPTION())
        {
            goto rulePLUSEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto rulePLUSEx; /* Prevent compiler warnings */
    rulePLUSEx: ;

}
// $ANTLR end PLUS

//   Comes from: 20:6: ( '-' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start MINUS
 *
 * Looks to match the characters the constitute the token MINUS
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mMINUS(pExprCppTreeLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = MINUS;


    // ./ExprCppTree.g:20:6: ( '-' )
    // ./ExprCppTree.g:20:8: '-'
    {
        MATCHC('-');
        if  (HASEXCEPTION())
        {
            goto ruleMINUSEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleMINUSEx; /* Prevent compiler warnings */
    ruleMINUSEx: ;

}
// $ANTLR end MINUS

//   Comes from: 26:6: ( '*' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start TIMES
 *
 * Looks to match the characters the constitute the token TIMES
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mTIMES(pExprCppTreeLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = TIMES;


    // ./ExprCppTree.g:26:6: ( '*' )
    // ./ExprCppTree.g:26:8: '*'
    {
        MATCHC('*');
        if  (HASEXCEPTION())
        {
            goto ruleTIMESEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleTIMESEx; /* Prevent compiler warnings */
    ruleTIMESEx: ;

}
// $ANTLR end TIMES

//   Comes from: 38:7: ( '=' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start ASSIGN
 *
 * Looks to match the characters the constitute the token ASSIGN
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mASSIGN(pExprCppTreeLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = ASSIGN;


    // ./ExprCppTree.g:38:7: ( '=' )
    // ./ExprCppTree.g:38:9: '='
    {
        MATCHC('=');
        if  (HASEXCEPTION())
        {
            goto ruleASSIGNEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleASSIGNEx; /* Prevent compiler warnings */
    ruleASSIGNEx: ;

}
// $ANTLR end ASSIGN

//   Comes from: 48:3: ( ( 'a' .. 'z' | 'A' .. 'Z' )+ )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start ID
 *
 * Looks to match the characters the constitute the token ID
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mID(pExprCppTreeLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = ID;


    // ./ExprCppTree.g:48:3: ( ( 'a' .. 'z' | 'A' .. 'Z' )+ )
    // ./ExprCppTree.g:48:5: ( 'a' .. 'z' | 'A' .. 'Z' )+
    {
        // ./ExprCppTree.g:48:5: ( 'a' .. 'z' | 'A' .. 'Z' )+
        {
            int cnt1=0;

            for (;;)
            {
                int alt1=2;
        	switch ( LA(1) )
        	{
        	case 'A':
        	case 'B':
        	case 'C':
        	case 'D':
        	case 'E':
        	case 'F':
        	case 'G':
        	case 'H':
        	case 'I':
        	case 'J':
        	case 'K':
        	case 'L':
        	case 'M':
        	case 'N':
        	case 'O':
        	case 'P':
        	case 'Q':
        	case 'R':
        	case 'S':
        	case 'T':
        	case 'U':
        	case 'V':
        	case 'W':
        	case 'X':
        	case 'Y':
        	case 'Z':
        	case 'a':
        	case 'b':
        	case 'c':
        	case 'd':
        	case 'e':
        	case 'f':
        	case 'g':
        	case 'h':
        	case 'i':
        	case 'j':
        	case 'k':
        	case 'l':
        	case 'm':
        	case 'n':
        	case 'o':
        	case 'p':
        	case 'q':
        	case 'r':
        	case 's':
        	case 't':
        	case 'u':
        	case 'v':
        	case 'w':
        	case 'x':
        	case 'y':
        	case 'z':
        		{
        			alt1=1;
        		}
        	    break;

        	}

        	switch (alt1)
        	{
        	    case 1:
        	        // ./ExprCppTree.g:
        	        {
        	            if ( ((LA(1) >= 'A') && (LA(1) <= 'Z')) || ((LA(1) >= 'a') && (LA(1) <= 'z')) )
        	            {
        	                CONSUME();
        	            }
        	            else
        	            {
        	                CONSTRUCTEX();
        	                EXCEPTION->type         = ANTLR3_MISMATCHED_SET_EXCEPTION;
        	                EXCEPTION->name         = (void *)ANTLR3_MISMATCHED_SET_NAME;

        	                LRECOVER();
        	                goto ruleIDEx;
        	            }


        	        }
        	        break;

        	    default:

        		if ( cnt1 >= 1 )
        		{
        		    goto loop1;
        		}
        		/* mismatchedSetEx()
        		 */
        		CONSTRUCTEX();
        		EXCEPTION->type = ANTLR3_EARLY_EXIT_EXCEPTION;
        		EXCEPTION->name = (void *)ANTLR3_EARLY_EXIT_NAME;


        		goto ruleIDEx;
        	}
        	cnt1++;
            }
            loop1: ;	/* Jump to here if this rule does not match */
        }

    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleIDEx; /* Prevent compiler warnings */
    ruleIDEx: ;

}
// $ANTLR end ID

//   Comes from: 49:4: ( ( '~' )? ( '0' .. '9' )+ )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start INT
 *
 * Looks to match the characters the constitute the token INT
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mINT(pExprCppTreeLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = INT;


    // ./ExprCppTree.g:49:4: ( ( '~' )? ( '0' .. '9' )+ )
    // ./ExprCppTree.g:49:6: ( '~' )? ( '0' .. '9' )+
    {
        // ./ExprCppTree.g:49:6: ( '~' )?
        {
            int alt2=2;
            switch ( LA(1) )
            {
                case '~':
                	{
                		alt2=1;
                	}
                    break;
            }

            switch (alt2)
            {
        	case 1:
        	    // ./ExprCppTree.g:49:6: '~'
        	    {
        	        MATCHC('~');
        	        if  (HASEXCEPTION())
        	        {
        	            goto ruleINTEx;
        	        }


        	    }
        	    break;

            }
        }

        // ./ExprCppTree.g:49:11: ( '0' .. '9' )+
        {
            int cnt3=0;

            for (;;)
            {
                int alt3=2;
        	switch ( LA(1) )
        	{
        	case '0':
        	case '1':
        	case '2':
        	case '3':
        	case '4':
        	case '5':
        	case '6':
        	case '7':
        	case '8':
        	case '9':
        		{
        			alt3=1;
        		}
        	    break;

        	}

        	switch (alt3)
        	{
        	    case 1:
        	        // ./ExprCppTree.g:
        	        {
        	            if ( ((LA(1) >= '0') && (LA(1) <= '9')) )
        	            {
        	                CONSUME();
        	            }
        	            else
        	            {
        	                CONSTRUCTEX();
        	                EXCEPTION->type         = ANTLR3_MISMATCHED_SET_EXCEPTION;
        	                EXCEPTION->name         = (void *)ANTLR3_MISMATCHED_SET_NAME;

        	                LRECOVER();
        	                goto ruleINTEx;
        	            }


        	        }
        	        break;

        	    default:

        		if ( cnt3 >= 1 )
        		{
        		    goto loop3;
        		}
        		/* mismatchedSetEx()
        		 */
        		CONSTRUCTEX();
        		EXCEPTION->type = ANTLR3_EARLY_EXIT_EXCEPTION;
        		EXCEPTION->name = (void *)ANTLR3_EARLY_EXIT_NAME;


        		goto ruleINTEx;
        	}
        	cnt3++;
            }
            loop3: ;	/* Jump to here if this rule does not match */
        }

    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleINTEx; /* Prevent compiler warnings */
    ruleINTEx: ;

}
// $ANTLR end INT

//   Comes from: 50:8: ( ( '\\r' )? '\\n' )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start NEWLINE
 *
 * Looks to match the characters the constitute the token NEWLINE
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mNEWLINE(pExprCppTreeLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = NEWLINE;


    // ./ExprCppTree.g:50:8: ( ( '\\r' )? '\\n' )
    // ./ExprCppTree.g:50:10: ( '\\r' )? '\\n'
    {
        // ./ExprCppTree.g:50:10: ( '\\r' )?
        {
            int alt4=2;
            switch ( LA(1) )
            {
                case '\r':
                	{
                		alt4=1;
                	}
                    break;
            }

            switch (alt4)
            {
        	case 1:
        	    // ./ExprCppTree.g:50:10: '\\r'
        	    {
        	        MATCHC('\r');
        	        if  (HASEXCEPTION())
        	        {
        	            goto ruleNEWLINEEx;
        	        }


        	    }
        	    break;

            }
        }

        MATCHC('\n');
        if  (HASEXCEPTION())
        {
            goto ruleNEWLINEEx;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleNEWLINEEx; /* Prevent compiler warnings */
    ruleNEWLINEEx: ;

}
// $ANTLR end NEWLINE

//   Comes from: 51:4: ( ( ' ' | '\\t' )+ )
/** \brief Lexer rule generated by ANTLR3
 *
 * $ANTLR start WS
 *
 * Looks to match the characters the constitute the token WS
 * from the attached input stream.
 *
 *
 * \remark
 *  - lexer->error == ANTLR3_TRUE if an exception was thrown.
 */
static ANTLR3_INLINE
void mWS(pExprCppTreeLexer ctx)
{
	ANTLR3_UINT32	_type;

    _type	    = WS;


    // ./ExprCppTree.g:51:4: ( ( ' ' | '\\t' )+ )
    // ./ExprCppTree.g:51:6: ( ' ' | '\\t' )+
    {
        // ./ExprCppTree.g:51:6: ( ' ' | '\\t' )+
        {
            int cnt5=0;

            for (;;)
            {
                int alt5=2;
        	switch ( LA(1) )
        	{
        	case '\t':
        	case ' ':
        		{
        			alt5=1;
        		}
        	    break;

        	}

        	switch (alt5)
        	{
        	    case 1:
        	        // ./ExprCppTree.g:
        	        {
        	            if ( LA(1) == '\t' || LA(1) == ' ' )
        	            {
        	                CONSUME();
        	            }
        	            else
        	            {
        	                CONSTRUCTEX();
        	                EXCEPTION->type         = ANTLR3_MISMATCHED_SET_EXCEPTION;
        	                EXCEPTION->name         = (void *)ANTLR3_MISMATCHED_SET_NAME;

        	                LRECOVER();
        	                goto ruleWSEx;
        	            }


        	        }
        	        break;

        	    default:

        		if ( cnt5 >= 1 )
        		{
        		    goto loop5;
        		}
        		/* mismatchedSetEx()
        		 */
        		CONSTRUCTEX();
        		EXCEPTION->type = ANTLR3_EARLY_EXIT_EXCEPTION;
        		EXCEPTION->name = (void *)ANTLR3_EARLY_EXIT_NAME;


        		goto ruleWSEx;
        	}
        	cnt5++;
            }
            loop5: ;	/* Jump to here if this rule does not match */
        }

        {
            LEXSTATE->channel = HIDDEN;
        }


    }

	LEXSTATE->type = _type;
    // This is where rules clean up and exit
    //
    goto ruleWSEx; /* Prevent compiler warnings */
    ruleWSEx: ;

}
// $ANTLR end WS

/** This is the entry point in to the lexer from an object that
 *  wants to generate the next token, such as a pCOMMON_TOKEN_STREAM
 */
static void
mTokens(pExprCppTreeLexer ctx)
{
    {
        //  ./ExprCppTree.g:1:8: ( T__12 | T__13 | PLUS | MINUS | TIMES | ASSIGN | ID | INT | NEWLINE | WS )

        ANTLR3_UINT32 alt6;

        alt6=10;

        switch ( LA(1) )
        {
        case '(':
        	{
        		alt6=1;
        	}
            break;
        case ')':
        	{
        		alt6=2;
        	}
            break;
        case '+':
        	{
        		alt6=3;
        	}
            break;
        case '-':
        	{
        		alt6=4;
        	}
            break;
        case '*':
        	{
        		alt6=5;
        	}
            break;
        case '=':
        	{
        		alt6=6;
        	}
            break;
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
        	{
        		alt6=7;
        	}
            break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '~':
        	{
        		alt6=8;
        	}
            break;
        case '\n':
        case '\r':
        	{
        		alt6=9;
        	}
            break;
        case '\t':
        case ' ':
        	{
        		alt6=10;
        	}
            break;

        default:
            CONSTRUCTEX();
            EXCEPTION->type         = ANTLR3_NO_VIABLE_ALT_EXCEPTION;
            EXCEPTION->message      = (void *)"";
            EXCEPTION->decisionNum  = 6;
            EXCEPTION->state        = 0;


            goto ruleTokensEx;

        }

        switch (alt6)
        {
    	case 1:
    	    // ./ExprCppTree.g:1:10: T__12
    	    {
    	        /* 1:10: T__12 */
    	        mT__12(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 2:
    	    // ./ExprCppTree.g:1:16: T__13
    	    {
    	        /* 1:16: T__13 */
    	        mT__13(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 3:
    	    // ./ExprCppTree.g:1:22: PLUS
    	    {
    	        /* 1:22: PLUS */
    	        mPLUS(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 4:
    	    // ./ExprCppTree.g:1:27: MINUS
    	    {
    	        /* 1:27: MINUS */
    	        mMINUS(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 5:
    	    // ./ExprCppTree.g:1:33: TIMES
    	    {
    	        /* 1:33: TIMES */
    	        mTIMES(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 6:
    	    // ./ExprCppTree.g:1:39: ASSIGN
    	    {
    	        /* 1:39: ASSIGN */
    	        mASSIGN(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 7:
    	    // ./ExprCppTree.g:1:46: ID
    	    {
    	        /* 1:46: ID */
    	        mID(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 8:
    	    // ./ExprCppTree.g:1:49: INT
    	    {
    	        /* 1:49: INT */
    	        mINT(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 9:
    	    // ./ExprCppTree.g:1:53: NEWLINE
    	    {
    	        /* 1:53: NEWLINE */
    	        mNEWLINE(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;
    	case 10:
    	    // ./ExprCppTree.g:1:61: WS
    	    {
    	        /* 1:61: WS */
    	        mWS(ctx );
    	        if  (HASEXCEPTION())
    	        {
    	            goto ruleTokensEx;
    	        }



    	    }
    	    break;

        }
    }


    goto ruleTokensEx; /* Prevent compiler warnings */
ruleTokensEx: ;
}

/* =========================================================================
 * Lexer matching rules end.
 * =========================================================================
 */
/* End of Lexer code
 * ================================================
 * ================================================
 */


/* End of code
 * =============================================================================
 */
