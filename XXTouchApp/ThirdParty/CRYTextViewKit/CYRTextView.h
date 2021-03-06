//
//  CYRTextView.h
//
//  Version 0.4.0
//
//  Created by Illya Busigin on 01/05/2014.
//  Copyright (c) 2014 Cyrillian, Inc.
//  Copyright (c) 2013 Dominik Hauser
//  Copyright (c) 2013 Sam Rijs
//
//  Distributed under MIT license.
//  Get the latest version from here:
//
//  https://github.com/illyabusigin/CYRTextView
//  Gestures sourced from: https://github.com/srijs/NLTextView
//
// The MIT License (MIT)
//
// Copyright (c) 2014 Cyrillian, Inc.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal in
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
// the Software, and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <UIKit/UIKit.h>
#import "CYRToken.h"

@class UITextInputArrowKeyHistory;
@interface UIResponder()
- (UITextInputArrowKeyHistory *)_moveUp:(bool)arg1 withHistory:(id)arg2;
- (UITextInputArrowKeyHistory *)_moveToStartOfDocument:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToStartOfParagraph:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveDown:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToEndOfDocument:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToEndOfParagraph:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveLeft:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToStartOfLine:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToStartOfWord:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveRight:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToEndOfLine:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
- (UITextInputArrowKeyHistory *)_moveToEndOfWord:(bool)arg1 withHistory:(UITextInputArrowKeyHistory *)arg2;
@end

@class CYRToken;

@interface CYRTextView : UITextView

@property (nonatomic, strong) NSArray <CYRToken *> *tokens;
@property (nonatomic, strong) UIPanGestureRecognizer *singleFingerPanRecognizer;
@property (nonatomic, strong) UIPanGestureRecognizer *doubleFingerPanRecognizer;

@property UIColor *gutterBackgroundColor;
@property UIColor *gutterLineColor;

@property (nonatomic, assign) BOOL lineCursorEnabled;

- (id)initWithFrame:(CGRect)frame;
- (void)xxtMoveUp;
- (void)xxtMoveDown;
- (void)xxtMoveLeft;
- (void)xxtMoveRight;
- (void)xxtStartMove;

@end
