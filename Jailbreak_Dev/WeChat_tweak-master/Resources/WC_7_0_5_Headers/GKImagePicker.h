//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GKImageCropControllerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSString, UIImagePickerController;

@interface GKImagePicker : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, GKImageCropControllerDelegate>
{
    _Bool resizeableCropArea;
    id <GKImagePickerDelegate> delegate;
    UIImagePickerController *_imagePickerController;
    struct CGSize cropSize;
}

- (void).cxx_destruct;
- (void)_hideController;
@property(nonatomic) struct CGSize cropSize; // @synthesize cropSize;
@property(nonatomic) __weak id <GKImagePickerDelegate> delegate; // @synthesize delegate;
- (void)imageCropController:(id)arg1 didFinishWithCroppedImage:(id)arg2;
@property(retain, nonatomic) UIImagePickerController *imagePickerController; // @synthesize imagePickerController=_imagePickerController;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)init;
@property(nonatomic) _Bool resizeableCropArea; // @synthesize resizeableCropArea;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
