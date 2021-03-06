//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMTipsViewControllerDelegate.h"
#import "MailAttachmentsViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "WCActionSheetDelegate.h"

@class MailAttachment, NSMutableArray, NSString, UIButton, UIImageView, UILabel, UINavigationController, UIView;

@interface MailAttachmentControlView : MMUIView <MMTipsViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, WCActionSheetDelegate, UIAlertViewDelegate, MailAttachmentsViewDelegate>
{
    NSMutableArray *m_arrAttachmentViews;
    UILabel *m_labelCol;
    UIImageView *m_imgvAttach;
    UILabel *m_labTip;
    UIButton *m_blueButton;
    UIView *m_grayLineView;
    id <MailAttachmentControlViewDelegate> m_delegate;
    unsigned int m_uiImageAttachIndex;
    unsigned int m_uiVideoAttachIndex;
    _Bool m_bIsNewMail;
    NSMutableArray *m_attachmentToUpload;
    unsigned int m_assetCount;
    UINavigationController *m_picker;
    MailAttachment *m_lastAttachment;
}

- (void).cxx_destruct;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (id)NewDataMessage;
- (void)OnDeleteAttachment:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addAttachmentView:(id)arg1;
- (void)addToUploadAttachment:(id)arg1 withNameSuffix:(id)arg2;
- (id)allToStoreFiles;
- (id)allUploadedFiles;
- (unsigned long long)count;
- (id)dataIDs;
- (void)dealloc;
- (void)doDeleteAttachment:(unsigned int)arg1;
- (double)getContentTotalHeight;
- (void)handleUploadData:(id)arg1 name:(id)arg2;
- (id)init;
- (void)initView;
- (id)initWithStoredAttachments:(id)arg1;
@property(nonatomic) __weak id <MailAttachmentControlViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MailAttachment *m_lastAttachment; // @synthesize m_lastAttachment;
- (void)onAddAttachmentItemComplete;
- (void)onButtonClicked:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 sentImmediately:(_Bool)arg3 isMuted:(_Bool)arg4 editVideoAttr:(id)arg5;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)properInit;
- (void)selectFromAlbum;
- (void)setIsNewMail:(_Bool)arg1;
- (void)showImagePicker:(long long)arg1 withAvailableCount:(unsigned int)arg2;
- (void)takePhoto;
- (unsigned long long)totalSize;
- (void)updateViews;
- (_Bool)uploadSuccess;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

