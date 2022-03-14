string toLower (string s)
{
    string d="";
    for ( int i=0; i< s.size(); i++){
        if('A'<= s[i]&& s[i]<='Z'){
            d+=s[i]+32;
        }
        else d+=s[i];
    }
    return d;
}
