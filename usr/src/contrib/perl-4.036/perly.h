#define WORD 257
#define LABEL 258
#define APPEND 259
#define OPEN 260
#define SSELECT 261
#define LOOPEX 262
#define DOTDOT 263
#define USING 264
#define FORMAT 265
#define DO 266
#define SHIFT 267
#define PUSH 268
#define POP 269
#define LVALFUN 270
#define WHILE 271
#define UNTIL 272
#define IF 273
#define UNLESS 274
#define ELSE 275
#define ELSIF 276
#define CONTINUE 277
#define SPLIT 278
#define FLIST 279
#define FOR 280
#define FILOP 281
#define FILOP2 282
#define FILOP3 283
#define FILOP4 284
#define FILOP22 285
#define FILOP25 286
#define FUNC0 287
#define FUNC1 288
#define FUNC2 289
#define FUNC2x 290
#define FUNC3 291
#define FUNC4 292
#define FUNC5 293
#define HSHFUN 294
#define HSHFUN3 295
#define FLIST2 296
#define SUB 297
#define FILETEST 298
#define LOCAL 299
#define DELETE 300
#define RELOP 301
#define EQOP 302
#define MULOP 303
#define ADDOP 304
#define PACKAGE 305
#define AMPER 306
#define FORMLIST 307
#define REG 308
#define ARYLEN 309
#define ARY 310
#define HSH 311
#define STAR 312
#define SUBST 313
#define PATTERN 314
#define RSTRING 315
#define TRANS 316
#define LISTOP 317
#define OROR 318
#define ANDAND 319
#define UNIOP 320
#define LS 321
#define RS 322
#define MATCH 323
#define NMATCH 324
#define UMINUS 325
#define POW 326
#define INC 327
#define DEC 328
typedef union {
    int	ival;
    char *cval;
    ARG *arg;
    CMD *cmdval;
    struct compcmd compval;
    STAB *stabval;
    FCMD *formval;
} YYSTYPE;
extern YYSTYPE yylval;
extern YYSTYPE yylval;
