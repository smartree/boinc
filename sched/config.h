// The contents of this file are subject to the Mozilla Public License
// Version 1.0 (the "License"); you may not use this file except in
// compliance with the License. You may obtain a copy of the License at
// http://www.mozilla.org/MPL/ 
// 
// Software distributed under the License is distributed on an "AS IS"
// basis, WITHOUT WARRANTY OF ANY KIND, either express or implied. See the
// License for the specific language governing rights and limitations
// under the License. 
// 
// The Original Code is the Berkeley Open Infrastructure for Network Computing. 
// 
// The Initial Developer of the Original Code is the SETI@home project.
// Portions created by the SETI@home project are Copyright (C) 2002
// University of California at Berkeley. All Rights Reserved. 
// 
// Contributor(s):
//

#ifndef _CONFIG_
#define _CONFIG_

// parsed version of server configuration file
//
class CONFIG {
public:
    char db_name[256];
    char db_passwd[256];
    int shmem_key;
    char key_dir[256];
    char download_url[256];
    char download_dir[256];
    char upload_url[256];
    char upload_dir[256];
    char user_name[256];
    bool start_assimilator;
    bool start_feeder;
    bool start_file_deleter;
    bool start_make_work;
    bool start_result_retry;
    bool start_validate;

    int parse(FILE*);
    int parse_file();
};

#endif
