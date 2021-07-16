// Copyright 2018-present the Material Components for iOS authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import <UIKit/UIKit.h>

#import "MDCAlertActionManager.h"
#import "MaterialButtons.h"

@interface MDCAlertControllerView ()

@property(nonatomic, nonnull, strong) UILabel *titleLabel;
@property(nonatomic, nonnull, strong) UITextView *messageTextView;

/** An optional custom UIView that is displaed under the alert message. */
@property(nonatomic, nullable, strong) UIView *accessoryView;

/** An optional custom view above the title of the alert. */
@property(nonatomic, strong, nullable) UIView *titleIconView;

@property(nonatomic, nullable, weak) MDCAlertActionManager *actionManager;

/** The scroll view that holds the @c titleLabel. */
@property(nonatomic, nonnull, strong) UIScrollView *titleScrollView;

/** The scroll view that holds the @c messageTextView and @c accessoryView. */
@property(nonatomic, nonnull, strong) UIScrollView *contentScrollView;

/** The scroll view that holds all of the buttons created for each action. */
@property(nonatomic, nonnull, strong) UIScrollView *actionsScrollView;

/** The backing image view of @c titleIcon. */
@property(nonatomic, nullable, strong) UIImageView *titleIconImageView;

/** The horizontal alignment of @c titleIcon. */
@property(nonatomic, assign) NSTextAlignment titleIconAlignment;

/** The horizontal alignment of @c title. */
@property(nonatomic, assign) NSTextAlignment titleAlignment;

/** The horizontal alignment of @c message. */
@property(nonatomic, assign) NSTextAlignment messageAlignment;

/** The alert actions alignment in horizontal layout. */
@property(nonatomic, assign) MDCContentHorizontalAlignment actionsHorizontalAlignment;

/** The horizontal alignment of the alert's actions when in vertical layout. */
@property(nonatomic, assign)
    MDCContentHorizontalAlignment actionsHorizontalAlignmentInVerticalLayout;

/** Enables ordering actions by emphasis when they are vertically aligned. */
@property(nonatomic, assign) BOOL orderVerticalActionsByEmphasis;

- (void)addActionButton:(nonnull MDCButton *)button;
+ (void)styleAsTextButton:(nonnull MDCButton *)button;

- (CGSize)calculatePreferredContentSizeForBounds:(CGSize)boundsSize;

- (CGSize)calculateActionsSizeThatFitsWidth:(CGFloat)boundingWidth;

- (void)updateFonts;

/*
 Indicates whether the view's contents should automatically update their font when the device’s
 @c UIContentSizeCategory changes.

 This property is modeled after @c adjustsFontForContentSizeCategory property in
 @c UIContentSizeCategoryAdjusting protocol added by Apple in iOS 10.

 Defaults to @c NO.
 */
@property(nonatomic, readwrite, setter=mdc_setAdjustsFontForContentSizeCategory:)
    BOOL mdc_adjustsFontForContentSizeCategory UI_APPEARANCE_SELECTOR;

@end
