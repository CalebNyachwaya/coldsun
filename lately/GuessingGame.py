#!/usr/bin/python3
# GuessingGame.py

quizlist = ["Which year did Kenya get independence?\n(a) 1963\n(b) 1991",
        "The color of the sky\n(a) Red\n(b) Blue\n"]

class Question:
    def __init__(self, prompt, answer):
        self.prompt = prompt
        self.answer = answer

questions = [Question(quizlist[0], "1963"), Question(quizlist[1], "Blue")]

def uliza(questions):
        score = 0
        for quest in questions:
            answer = input(quest.prompt)
            if answer ==  quest.answer:
                score += 1
        print("You got " + str(score) + "/" + str(len(questions)))

uliza(questions)


