/*
**Input: scanf line
**Output: check and report errors
*/
void check_scanf(int line, string s)
{
	string format_name;
    string format[4] = {"%c","%d","%lf","%s"};
	int scanf_index, first_bracket_index, last_bracket_index, cotation_index, comma_index, semicolon_index, other_index;

	scanf_index = s.find("scanf"); // find scanf

	if(scanf_index == -1)
        cout << "Line " << line << " :\t" << "spelling mistake of scanf" << endl;

	if(scanf_index != -1) {
        	s.erase(0, 5);
        	if(s[0] == ' ')
           		s.erase(0,s.find_first_not_of(' ')); // erase spaces after scanf

        	first_bracket_index = s.find('("');
        	last_bracket_index = s.find(')');
        	if(first_bracket_index == -1 || last_angle_index == -1) {
            		cout << "Line " << line << " :\t" << "first bracket missing" << endl;
            return;
        }

        if(first_bracket_index != 0) {
            cout << "Line " << line << " :\t" << "unexpected character after \"scanf\"" << endl;
            s.erase(0, first_bracket_index); // erase unexpected characters after scanf word
        }

    cotation_index = s.find('"'); // find double cotation
    if(cotation_index == -1) {
        cout << "Line " << line << " :\t" << "double cotation missing" << endl;

    if(cotation_index != 0) {
            cout << "Line " << line << " :\t" << "unexpected character after format specifier"\"" << endl;
            s.erase(0, cotation_index); // erase unexpected characters within the double cotation except format specifier
        }

    comma_index = s.find(','); // find comma after the double cotation
    if(cotation_index == -1) {
        cout << "Line " << line << " :\t" << "comma missing" << endl;

    if(comma_index != 0) {
            cout << "Line " << line << " :\t" << "unexpected character after double cotation")\"" << endl;
            s.erase(0, comma_index);
        }

    last_bracket_index = s.find(')'); // find the end of the first bracket

    format_name = s.substr(0, last_bracket_index);

    other_index = format_name.find(' ');
    if(other_index != -1)
        format_name = format_name.substr(0, other_index);

    int i = 0;
    while(i < 4) {
        if(!format_name.compare(format[i]))
            break;
            i++;
        }
    if(i == 4) // if not matched
            cout << "Line " << line << " :\t" << format_name << " proper format specifier is absent" << endl;
        s.erase(0, last_bracket_index + 1);

    semicolon_index = s.find(';'); // find semicolon at the end
    if(semicolon_index == -1) {
        cout << "Line " << line << " :\t" << "semicolon missing" << endl;

    if(semicolon_index != 0) {
            cout << "Line " << line << " :\t" << "unexpected character after \")\"" << endl;
            s.erase(0, semicolon_index);
        }

}
