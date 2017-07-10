//***************************************************************************
//                          pvapp.h  -  description
//                             -------------------
//  begin            : Mon Jul 3 11:30:12 2017
//  generated by     : pvdevelop (C) Lehrig Software Engineering
//  email            : lehrig@t-online.de
//***************************************************************************
#ifndef _PVAPP_H_
#define _PVAPP_H_

#ifdef USE_INETD
static int trace=1; // todo: set trace=0 if you do not want printf() within event loop
#else
static int trace=1; // todo: set trace=0 if you do not want printf() within event loop
#endif

// DATABASE code
// we include the database class and the header necessary for rlMutex
#include "qtdatabase.h"
#include "rlthread.h"

#include "processviewserver.h"
// todo: comment me out
#include "rlmodbusclient.h"
#include "rldataacquisition.h"
//#include "rlsiemenstcpclient.h"
//#include "rlppiclient.h"
#include "modbusdaemon.h"             // this is generated
//#include "siemensdaemon.h"            // this is generated
//#include "ppidaemon.h"                // this is generated

int show_mask1(PARAM *p);

#endif
