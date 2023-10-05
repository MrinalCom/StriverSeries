stack<string> st;
    string temp = "";

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            if (!temp.empty()) {
                st.push(temp);
                temp = "";
            }
        } else {
            temp += s[i];
        }
    }

    if (!temp.empty()) {
        st.push(temp);
    }

    string ans = "";

    while (!st.empty()) {
        ans += st.top();
        st.pop();
        if (!st.empty()) {
            ans += " ";
        }
    }

    return ans;
