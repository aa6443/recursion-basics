import random
class Card:
    def __init__(self, suit, value):
        self.suit = suit
        self.value = value

class Deck:
    def __init__(self):
        self.cards = []
        for s in ["Hearts", "Diamonds", "Clubs", "Spades"]:
            for v in ["A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"]:
                self.cards.append(Card(s, v))

    def deal(self):
        return self.cards.pop()

    def shuffle(self):
        random.shuffle(self.cards)

deck = Deck()
deck.shuffle()
card = deck.deal()

print("You got a %s of %s" % (card.value, card.suit))