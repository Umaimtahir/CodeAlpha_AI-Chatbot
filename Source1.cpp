#include<iostream>
#include<string>
#include<algorithm>
#include<thread>
#include<future>
using namespace std;

string analyzeSentiment(const string& input) {
    if (input.find("happy") != -1) 
        return "Positive";
    if (input.find("sad") != -1) 
        return "Negative";
    return "Neutral";
}

string handleIntent(const string& input) {
    const char* questions[] = {
        "what is ai", "define chatbot", "how are you"
    };
    const char* answers[] = {
        "Artificial Intelligence is the simulation of human intelligence in machines.",
        "A chatbot is a computer program designed to simulate conversation with human users.",
        "I'm just a program, but I'm functioning perfectly. Thanks for asking!"
    };
    const int numQuestions = 3; 

    string lowercaseInput = input;
    transform(lowercaseInput.begin(), lowercaseInput.end(), lowercaseInput.begin(), ::tolower);

    for (int i = 0; i < numQuestions; ++i) {
        if (lowercaseInput.find(questions[i]) != -1) 
            return answers[i];
        
    }
    return "I'm sorry, I don't have an answer for that.";
}

void chatbot() {
    string userInput;
    cout << "Chatbot: Hi! How can I assist you today?" << endl;
    while (true) {
        cout << "You: ";
        getline(cin, userInput);
        if (userInput == "exit") {
            cout << "Chatbot: Goodbye!" << endl;
            break;
        }
        auto sentimentFuture = async(launch::async, analyzeSentiment, userInput);
        string response = handleIntent(userInput);
        string sentiment = sentimentFuture.get();
        cout << "Chatbot: " << response << endl;
        cout << "(Sentiment: " << sentiment << ")" << endl;
    }
}
int main() {
    chatbot();
}