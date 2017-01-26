/*

   Copyright 2017   Jan Kammerath

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

*/

#ifndef	WEBKIT_H
#define WEBKIT_H

#include <JavaScriptCore/JavaScript.h>

/*
  Returns the JavaScript context of this webkit view
  @return       JavaScript context reference
*/
JSGlobalContextRef iptvx_get_js_context();

extern void iptvx_webkit_sendkey(int keyCode);
extern void* iptvx_get_overlay_ptr();
extern void* iptvx_get_overlay_ready_ptr();
extern void iptvx_webkit_start_thread(char *file);

#endif