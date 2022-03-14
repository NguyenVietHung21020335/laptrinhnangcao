bool kt(char a)
{
    if(( a== 'u' ) || ( a== 'e' ) || ( a== 'o' ) || ( a== 'a' ) || ( a== 'i' ) ){
        return true;
    }
    else return false;
}
string pigLatin( string word){
    string word1 ="";
    if( kt(word[0])==true) {
        word1 = word+ "way";
    }
    else {
        for (int i=1;i<word.length();i++){
            word1=word1+ word[i];

        }
        word1= word1+word[0]+"ay";
    }
    return word1;
}

