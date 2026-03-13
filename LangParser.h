#ifndef LangParser_h
#define LangParser_h

class LangParser::Lang {
private:
	std::string _code;
	std::string _name;
	std::map<std::string, std::string> _values;
public:
	Lang(std::string code);
	Lang* setName(std::string name);
	std::string getName();
	Lang* addStr(std::string key, std::string value);
	std::string tri(std::string key, std::vector<int> values = std::vector<int>());
	std::string trs(std::string key, std::vector<std::string> values = std::vector<std::string>());

};

#endif
