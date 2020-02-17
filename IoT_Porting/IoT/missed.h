//
//  missed.h
//  IoT_Porting
//
//  Created by Marcin Kielesiński on 23/01/2020.
//

#ifndef missed_h
#define missed_h

#include "optimize_size.h"
#include "macro_utils.h"

#define    __strong_reference(sym,aliassym)    \
extern __typeof (sym) aliassym __attribute__ ((__alias__ (#sym)))

#endif /* missed_h */
