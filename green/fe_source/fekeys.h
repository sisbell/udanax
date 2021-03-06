/* Copyright ? 1979-1999 Udanax.com. All rights reserved.

* This code is licensed under the terms of The Udanax Open-Source License, 
* which contains precisely the terms of the X11 License.  The full text of 
* The Udanax Open-Source License can be found in the distribution in the file 
* license.html.  If this file is absent, a copy can be found at 
* http://udanax.xanadu.com/license.html and http://www.udanax.com/license.html
*/
/***************************************************
  Copyright (c) 1987 Xanadu Operating Company
  XU.87.1 Frontend Source Code:      fekeys.h
***************************************************/

/* Control Keys currently selected for geometric and historical reasons */

#define CONTROL    ('B' -'@')         /*  */

#define CUP     ('W' - '@')
#define CDOWN   ('Z' - '@')
#define CLEFT   ('A' - '@')
#define CRIGHT  ('S' - '@')
#define TAB     ('I' - '@')     /* tab */
#define CTABDOWN 0x80
#define CTABUP   0x81
#define DEL     ('H' - '@')     /* back space */
#define DEL2    0x7f
#define HOMEUP  ('E' - '@')
#define HOMEDOWN ('D' - '@')
#define FILETOP ('Q' - '@')
#define FILEBOT ('X' - '@')
#define WINSWT  ('K' - '@')     /* */
#define WEIRDOPTIONS  ('N' - '@')     /*  */
#define ESC2    ('U' - '@')     /* alternate play with stack*/
#define REDRAW  (']' - '@')	/* redraw screen */

#define MLINK   ('L' - '@')     /* form feed */
#define DELCUTS     0           /*  */
#define COPY    ('G' - '@')     /* bell */
#define RRANGE  ('C' - '@')     /* line feed */
#define DELBLK  ('P' - '@')     /* DLE */

#define CR      ('M' - '@')     /* Carriage Return */
#define NL      ('\n')
#define FLINK   ('Y' - '@')
#define CHFR    ('V' - '@')
#define CHTO    ('B' - '@')

#define TAKEOUT ('\\' - '@')

#define SCREENMID       ('O' - '@')
#define NEXTPAGE        ('F' - '@')
#define PREVPAGE        ('R' - '@') 

#define TABUP   ('g')
#define TABDOWN ('F')

/* Escape sequence controls */

#define ESCCUP  'A'
#define ESCCDOWN 'B'
#define ESCRIGHT 'C'
#define ESCLEFT 'D'
#define ESCHOME 'H'

#define EXITNORMALLYCHAR ('T' - '@')



/*metachars*/

#define IGNOREMETACHAR   ('A' - '@') + 128
#define CREATENEWVERSIONCHAR   ('B' - '@') + 128
#define NEWDOC           ('C' - '@') + 128
#define CUT              ('D' - '@') + 128
#define SHOWLINKSSCHAR   ('E' - '@') + 128
#define CREATEVERSIONCHAR ('F' - '@') + 128
#define BECOMECRUFTYCHAR  ('G' - '@') + 128
#define RTAB              ('H' - '@')  + 128 /* formerly 0x7f rub-out */
#define COMPARECHAR       ('K' -'@')   + 128  
#define CREATEFOOTNOTECHAR ('L' -'@') +128
#define SPECIALHIGHBYTE 0x5500  /*ibmpc nonascii indicator */
