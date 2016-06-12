/**
 *  Desenvolvido por Edwino Stein - edwino.stein@gmail.com
 */

#if !defined  _COMMON_STRING
#define _COMMON_STRING

    // Define a estrutura da String
    typedef struct {
        char *cString;
    } _String;

    typedef _String * String;

    String newString(const char *init);
    void deleteString(String str);

    void eraseString(String str);
    void setString(String str, const char *value);
    void copyString(String destination, String source);
    void concatenateString(String destination, String source);
    void concatenateCString(String destination, const char *source);
    const char *getCStr(String str);
    char getStrChar(String str, unsigned int pos);
    char * getStrPointerChar(String str, unsigned int pos);
    char getStrFirstChar(String str);
    char getStrLastChar(String str);

    bool strIsEqual(String str1, String str2);
    bool cStrIsEqual(String str1, const char *str2);
    unsigned int strLength(String str);
    bool strIsEmpty(String str);

    void strToUpper(String str);
    void strToLower(String str);

#endif
