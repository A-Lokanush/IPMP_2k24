string rearrange(string str){
    int n  = str.length();
    string odd="", even="";
    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            even += str[i];
        } else {
            odd += str[i];
        }
    }
    odd.append(even);
    return odd;
}