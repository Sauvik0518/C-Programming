#include<iostream>
#include<string>
using namespace std;

/* files created for required functions */
#include "header.cpp"

/* prototypes of functions */
string check_comment(int line, string s);

/* global variables */
int comment_flag = 0;

int main(void)
{
    string s;   // hold a line of the file
    int line = 0;   // line number

    while(getline(cin, s)) {
        line++;
        /* check for comment */
        s = check_comment(line, s);
        /* check for header */
        check_header(line, s);

    }

    return 0;
}

/*
** This function check for comments
** Output: return string after erasing comment
*/
string check_comment(int line, string s)
{
    int single_line_index;  // hold the index of double slash
    int multi_line_index1;   // hold the index of "/*"
    int multi_line_index2;   // hold the index of "*/"

    /* search for // or /* if comment not started yet */
    if(comment_flag == 0) {
        single_line_index = s.find("//");
        multi_line_index1 = s.find("/*");

        /* if // found first, then this is a single line comment */
        if(single_line_index < multi_line_index1) {
            s.erase(single_line_index);
            return s;
        }

        /* if /* found first, then this is a multiline comment */
        else if(single_line_index > multi_line_index1){
            comment_flag = 1;

            // now search for "*/"
            multi_line_index2 = s.find("*/");
            if(multi_line_index2 != -1) {
                comment_flag = 0;
                s.erase(multi_line_index1, (multi_line_index2 - multi_line_index1) + 3);
                return s;
            }

            s.erase(multi_line_index1);
            return s;
        }
    }

    // if multiline comment started, then search for "*/"
    else {
        multi_line_index2 = s.find("*/");
        // if found
        if(multi_line_index2 != -1) {
            comment_flag = 0;
            s.erase(0, multi_line_index2 + 2);
            return s;
        }
        // if not found
        s.erase(0);
        return s;
    }
}
