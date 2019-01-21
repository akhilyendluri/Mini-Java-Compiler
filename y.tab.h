/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     PROGRAMnum = 258,
     IDnum = 259,
     SEMInum = 260,
     LBRACEnum = 261,
     RBRACEnum = 262,
     Data = 263,
     CLASSnum = 264,
     LBRACnum = 265,
     RBRACnum = 266,
     INTnum = 267,
     LPARENnum = 268,
     RPARENnum = 269,
     METHODnum = 270,
     VOIDnum = 271,
     VALnum = 272,
     WHILEnum = 273,
     ELSEnum = 274,
     IFnum = 275,
     DOTnum = 276,
     COMMAnum = 277,
     EQUALnum = 278,
     GTnum = 279,
     LTnum = 280,
     NEnum = 281,
     NOTnum = 282,
     EQnum = 283,
     GEnum = 284,
     LEnum = 285,
     PLUSnum = 286,
     MINUSnum = 287,
     DIVIDEnum = 288,
     TIMESnum = 289,
     ORnum = 290,
     EOFnum = 291,
     COMMENTSTARTnum = 292,
     COMMENTENDnum = 293,
     ANDnum = 294,
     ASSGNnum = 295,
     ENDDECLARATIONSnum = 296,
     DECLARATIONnum = 297,
     RETURNnum = 298,
     SCONSTERROTnum = 299,
     ICONSTnum = 300,
     SCONSTnum = 301,
     IDERRORnum = 302
   };
#endif
/* Tokens.  */
#define PROGRAMnum 258
#define IDnum 259
#define SEMInum 260
#define LBRACEnum 261
#define RBRACEnum 262
#define Data 263
#define CLASSnum 264
#define LBRACnum 265
#define RBRACnum 266
#define INTnum 267
#define LPARENnum 268
#define RPARENnum 269
#define METHODnum 270
#define VOIDnum 271
#define VALnum 272
#define WHILEnum 273
#define ELSEnum 274
#define IFnum 275
#define DOTnum 276
#define COMMAnum 277
#define EQUALnum 278
#define GTnum 279
#define LTnum 280
#define NEnum 281
#define NOTnum 282
#define EQnum 283
#define GEnum 284
#define LEnum 285
#define PLUSnum 286
#define MINUSnum 287
#define DIVIDEnum 288
#define TIMESnum 289
#define ORnum 290
#define EOFnum 291
#define COMMENTSTARTnum 292
#define COMMENTENDnum 293
#define ANDnum 294
#define ASSGNnum 295
#define ENDDECLARATIONSnum 296
#define DECLARATIONnum 297
#define RETURNnum 298
#define SCONSTERROTnum 299
#define ICONSTnum 300
#define SCONSTnum 301
#define IDERRORnum 302




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

