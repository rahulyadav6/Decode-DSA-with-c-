void printSubSet(string ans, string original){
    if(original == ""){
        cout<<ans<<endl;
        return;
    }
    char ch = original[0];
    printSubSet(ans+ch, original.substr(1));
    printSubSet(ans, original.substr(1));
}