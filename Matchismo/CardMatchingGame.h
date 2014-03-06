//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Bence Berenyi on 06/03/14.
//  Copyright (c) 2014 Bence Berenyi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"
#import "Card.h"

@interface CardMatchingGame : NSObject

//designated initalizer
- (instancetype)initWithCardCount:(NSUInteger)count usingDeck: (Deck *) deck;

- (void)chooseCardAtIndex:(NSUInteger)index;
- (Card *)cardAtIndex:(NSUInteger)index;

@property (nonatomic, readonly) NSInteger score;

@end
