/** ***************************************************************************
 * @file port_def.h communications port data structures used by Uart and
 *                  GPS parsing routines
 *
 * THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
 * KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
 * PARTICULAR PURPOSE.
 *
 *****************************************************************************/
/*******************************************************************************
Copyright 2018 ACEINNA, INC

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*******************************************************************************/

#ifndef PORT_DEF_H
#define PORT_DEF_H

#include "comm_buffers.h"


typedef struct{
    cir_buf_t	rec_buf;	///< Receive buffer array of pointers
    cir_buf_t	xmit_buf;   ///< Transmit buffer array of pointers
    int32_t     txBusy;
    int32_t     rxBusy;
} port_struct;


#endif

