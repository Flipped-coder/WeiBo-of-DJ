//
//  PostView.h
//  微博4.0
//
//  Created by 邓杰 on 2022/5/20.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PostView : UIView

@property(strong,nonatomic)UITextView *text;
@property(strong,nonatomic)UILabel *placeholder;

- (void)LoadPoatTextField;

@end

NS_ASSUME_NONNULL_END
