#include<iostream>
#include<regex>
using namespace std;
class Token{
	private:
		string mtoken;
	public:
		Token(string token = ""){
			mtoken = token;
		}
		void setToken(string token){
			mtoken = token;
		}
		string getToken(){
			return mtoken;
		}
		friend ostream& operator << (ostream& out,Token t){
			out<<t.mtoken;
			return out;
		}
		bool isIdentifier(){
		  regex b("^[a-zA-Z_][a-zA-Z0-9_]*$");
		   if ( regex_match(mtoken, b) )
                  return true;
            return false;
		}
		bool isNumeric(){
		  regex b("(\\+|-)?[[:digit:]]+");
		   if ( regex_match(mtoken, b) )
                  return true;
            return false;
		}
		bool isOperator(){
		  regex b("(\\+|-|\\*|%|/|\\+\\+|--|=)");
		   if ( regex_match(mtoken, b) )
                  return true;
            return false;
		}
};
class Tokenizer{
	private:
		string minput;
	public:
		Tokenizer(string input = ""){
			minput = input;
		}
		void setInput(string input){
			minput = input;
		}
		string getInput(){
			return minput;
		}
		friend ostream& operator << (ostream& out,Tokenizer to){
			out<<to.minput;
			return out;
		}
		vector<Token> tokenize(){
			vector<Token> tokens;
			regex ws_re("\\s+"); 
			vector<string> result{ 
    		sregex_token_iterator(minput.begin(), minput.end(), ws_re, -1), {}};
    		vector <string>::iterator it;
			for(it=result.begin();it<result.end();it++){
				Token t(*it);
				tokens.push_back(t);
			}
			return tokens; 
		}
};
int main(){
	Tokenizer to;
	to.setInput("a = b + 5");
	vector<Token> token = to.tokenize();
	vector <Token>::iterator it;
	for(it=token.begin();it<token.end();it++){
		if(it->isIdentifier()){
			cout<<"<id> " ;
		}
		else if(it->isNumeric()){
			cout<<"<literal> ";
		}
		else if(it->isOperator()){
			cout<<"<op> ";
		}
		else{
			cout<<"error";
		}
		
	}
	return 0;
}
