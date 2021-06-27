class solution {
public:

    bool hasOrder(vector<string> codelist, vector<string> shoppingCart, int cartindex) {

        for (auto word :codelist) {
            if (cartindex < shoppingCart.size() && (word=="anything" || shoppingCart[cartindex]==word)){
                cartindex++;
            }else{
                return false;
            }
        }
        return true;
    }

    int freshPromotion(vector<vector<string>> codeList, vector<string> shoppingCart) {
        int cartId = 0, codeId = 0;
        while (cartId < shoppingCart.size() && codeId < codeList.size()) {
            string current = shoppingCart[cartId];
            if ((shoppingCart[cartId] == "anything" || current == codeList[codeId][0]) &&
                hasOrder(codeList[codeId], shoppingCart, cartId)) {
                cartId += codeList[codeId].size();
                codeId++;
            } else
                cartId++;
        }
        return (codeId == codeList.size()) ? 1 : 0;
    }

};

int main() {

    vector<vector<string>> codeList = {{"apple",  "apple"},
                                       {"banana", "anything", "banana"}};
    vector<string> shoppingCart1 = {"orange", "apple", "apple", "banana", "orange", "banana"};
    vector<string> shoppingCart2 = {"banana", "orange", "banana", "apple", "apple"};
    vector<string> shoppingCart3 = {"apple", "banana", "apple", "banana", "orange", "banana"};
    vector<string> shoppingCart4 = {"apple", "apple", "apple", "banana"};
    bool expectedOutput1 = true;
    bool expectedOutput2 = false;
    bool expectedOutput3 = false;
    bool expectedOutput4 = false;

    solution sol;
    cout << sol.freshPromotion(codeList, shoppingCart1) << "  Expected: " << expectedOutput1 << endl;
    cout << sol.freshPromotion(codeList, shoppingCart2) << "  Expected: " << expectedOutput2 << endl;
    cout << sol.freshPromotion(codeList, shoppingCart3) << "  Expected: " << expectedOutput3 << endl;
    cout << sol.freshPromotion(codeList, shoppingCart4) << "  Expected: " << expectedOutput4 << endl;

    return 0;
}
