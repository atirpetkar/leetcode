



bool isAnagram1(string s, string t) {
     if (s.size() != t.size()) return false;
     map<char, int> ss, st;
     for (int i = 0; i < s.size(); i++){
         if (ss.find(s[i]) != ss.end()) ss[s[i]] += 1; else ss[s[i]] = 1;
         if (st.find(t[i]) != st.end()) st[t[i]] += 1; else st[t[i]] = 1;
     }
     for (auto pair: ss) if (pair.second != st[pair.first]) return false;
     return true;
}


bool isAnagram2(string s, string t) {

    if (s.size() != t.size()) return false;
    int alphabets[26] = {0}; //gotcha: init with just int alphabets[26] will give you garbage values, hence you need {0}
    for (int i: alphabets) std::cout<<alphabets << " ";
    std::cout<<std::endl;
    for (int i = 0 ; i < s.size() ; i++){
        ++alphabets[s[i] - 'a'];
        --alphabets[t[i] - 'a'];
    }
    for (int i: alphabets) if (i != 0) return false;
    return true;
    
}
