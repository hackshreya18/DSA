#include <iostream>
#include <string>

using namespace std;

class UserMainCode {
public:
    struct Result {
        string output1;
        string output2;
        string output3;

        Result(string out1, string out2, string out3)
            : output1(out1), output2(out2), output3(out3) {}
    };

    Result encodeThreeStrings(string input1, string input2, string input3) {
        // Split the strings into parts
        string front1 = getFrontPart(input1);
        string middle1 = getMiddlePart(input1);
        string end1 = getEndPart(input1);

        string front2 = getFrontPart(input2);
        string middle2 = getMiddlePart(input2);
        string end2 = getEndPart(input2);

        string front3 = getFrontPart(input3);
        string middle3 = getMiddlePart(input3);
        string end3 = getEndPart(input3);

        // Generate the output strings based on the rules
        string output1 = front1 + end2 + middle3;
        string output2 = middle1 + front2 + end3;
        string output3 = end1 + middle2 + front3;

        // Toggle the case of the third output string
        output3 = toggleCase(output3);

        // Return the result object
        return Result(output1, output2, output3);
    }

private:
    // Helper method to get the front part of the string
    string getFrontPart(const string& str) {
        int len = str.length();
        int partSize = len / 3;
        if (len % 3 == 0 || len % 3 == 1) {
            return str.substr(0, partSize);
        } else {
            return str.substr(0, partSize + 1);
        }
    }

    // Helper method to get the middle part of the string
    string getMiddlePart(const string& str) {
        int len = str.length();
        int partSize = len / 3;
        if (len % 3 == 0) {
            return str.substr(partSize, partSize);
        } else if (len % 3 == 1) {
            return str.substr(partSize, partSize + 1);
        } else {
            return str.substr(partSize + 1, partSize + 1);
        }
    }

    // Helper method to get the end part of the string
    string getEndPart(const string& str) {
        int len = str.length();
        int partSize = len / 3;
        if (len % 3 == 0 || len % 3 == 1) {
            return str.substr(partSize * 2);
        } else {
            return str.substr(partSize * 2 + 1);
        }
    }

    // Method to toggle the case of a string
    string toggleCase(const string& str) {
        string toggled;
        for (char c : str) {
            if (isupper(c)) {
                toggled += tolower(c);
            } else if (islower(c)) {
                toggled += toupper(c);
            } else {
                toggled += c;
            }
        }
        return toggled;
    }
};

int main() {
    UserMainCode userMainCode;

    string input1 = "John";
    string input2 = "Johny";
    string input3 = "Janardhan";

    UserMainCode::Result result = userMainCode.encodeThreeStrings(input1, input2, input3);

    cout << "Output1: " << result.output1 << endl;
    cout << "Output2: " << result.output2 << endl;
    cout << "Output3: " << result.output3 << endl;

    return 0;
}