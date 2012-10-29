#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
    if (argc < 3) {
        cout << "Usage: " << argv[0] << " str1 str2" << endl;
        exit(0);
    }

    vector<char> v1(argv[1], argv[1] + strlen(argv[1]));
    vector<char> v2(argv[2], argv[2] + strlen(argv[2]));

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    cout << (v1 == v2) << endl;
}
