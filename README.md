# CodeAlpha_AI-Chatbot

# Chatbot Program

## Overview
This C++ program implements a simple chatbot that can respond to predefined questions and analyze the sentiment of user input. The chatbot uses a rule-based approach to determine responses based on the user's input and performs sentiment analysis in parallel. The program demonstrates basic concepts of string manipulation, multithreading, and asynchronous programming in C++.

## Features
- **Intent Handling**: The chatbot can respond to specific user queries about AI, chatbots, and its own functionality.
- **Sentiment Analysis**: The program performs sentiment analysis to classify user input as "Positive", "Negative", or "Neutral".
- **Multithreading**: Sentiment analysis is handled in a separate thread to improve performance and allow asynchronous processing.
- **Exit Command**: The chatbot ends the conversation when the user types `exit`.

## How it Works
1. The chatbot greets the user and waits for their input.
2. It checks if the input matches any predefined questions and returns an appropriate response.
3. It performs sentiment analysis on the input to determine if it is "Positive", "Negative", or "Neutral".
4. The chatbot prints the response and sentiment to the console.
5. The conversation continues until the user types `exit`.

## Requirements
- C++11 or higher (for multithreading and `std::async`)
- A C++ compiler that supports C++11 or later (e.g., GCC, Clang, MSVC)



##How to Run
#Compile the Program:

Use a C++ compiler that supports C++11 or later. For example, using g++:

g++ -std=c++11 -o chatbot chatbot.cpp

#Run the Program:

Execute the compiled program:

./chatbot

#Interacting with the Chatbot:

Type a question or statement to interact with the chatbot.
To exit the conversation, type exit.
