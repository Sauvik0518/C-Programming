/*
**Input: header file line
**Output: check and report errors
*/

void check_header(int line, string s)
{
    string header_name;
    string headers[5] = {"stdio.h", "string.h", "math.h", "stdlib.h", "time.h"};
    int include_index, first_angle_index, last_angle_index;
    int other_index;

    s.erase(0, 1);  // erase #
    if(s[0] == ' ')
        s.erase(0,s.find_first_not_of(' '));    // erase spaces after #

    include_index = s.find("include"); // find include
    if(include_index == -1)
        cout << "Line " << line << " :\t" << "spelling mistake of include" << endl;

    if(include_index != -1) {
        s.erase(0, 7);  // erase "include"
        if(s[0] == ' ')
            s.erase(0,s.find_first_not_of(' '));    // erase spaces after "include"

        first_angle_index = s.find('<');
        last_angle_index = s.find('>');
        if(first_angle_index == -1 || last_angle_index == -1) {
            cout << "Line " << line << " :\t" << "angle bracket missing" << endl;
            return;
        }

        if(first_angle_index != 0) {
            cout << "Line " << line << " :\t" << "unexpected character after \"include\"" << endl;
            s.erase(0, first_angle_index); // erase extra character after include
        }

        s.erase(0, 1);  // erase <
        if(s[0] == ' ') {
            cout << "Line " << line << " :\t" << "unexpected space after <" << endl;
            return;
        }

        last_angle_index = s.find('>');

        header_name = s.substr(0, last_angle_index);    // copy the header name including space if found

        other_index = header_name.find(' ');   // index of space in the header
        if(other_index != -1)
            header_name = header_name.substr(0, other_index);   // copy the header file name

        int i = 0;
        while(i < 5) {
            if(!header_name.compare(headers[i]))
                break;
            i++;
        }
        if(i == 5)  // if not matched
            cout << "Line " << line << " :\t" << header_name << " is not a header file" << endl;
        s.erase(0, last_angle_index + 1); // erase all characters to >

        other_index = s.find_first_not_of(' ');     // index of extra character after >
        if(other_index > -1)
            cout << "Line " << line << " :\t" << "unexpected character after >" << endl;
    }
}
