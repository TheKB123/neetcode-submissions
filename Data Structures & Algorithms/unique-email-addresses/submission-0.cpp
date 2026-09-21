class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> unique_emails;
        int count = 0;
        for ( string email : emails ) {
            string actual_email;
            bool has_plus = 0, domain_name = 0;
            for ( char ch : email ) {
                if ( ch == '@' )
                    domain_name = 1;
                if ( !domain_name ) {
                    if ( has_plus || ch == '.' )
                        continue;
                    if ( ch == '+' ) {
                        has_plus = 1;
                        continue;
                    }
                    has_plus = 0;
                }
                actual_email += ch;
            }
            if ( !unique_emails.count(actual_email) ) {
                count++;
                unique_emails.insert(actual_email);
            }
        }
        return count;
    }
};