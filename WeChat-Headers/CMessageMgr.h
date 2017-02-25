//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IAudioToMessageExt.h"
#import "IClearDataMgrExt.h"
#import "IEmoticonExt.h"
#import "IMessageWrapImgExt.h"
#import "IMsgExt.h"
#import "IVideoExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "MessageObserverDelegate.h"
#import "MessageWrapImgDelegate.h"
#import "OpenDownloadCDNMgrDelegate.h"
#import "OpenUploadCDNMgrDelegate.h"
#import "OpenUploadMgrDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "RecordUploadCDNMgrDelegate.h"
#import "UploadImageCDNMgrDelegate.h"

@class CDownloadVideoMgr, CEmoticonDownloadMgr, CEmoticonUploadMgr, CMessageDB, CUploadVideoMgr, DownloadImageCDNMgr, DownloadImageMgr, DownloadVideoCDNMgr, MessagePatternCacheMgr, NSDate, NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSString, OpenDownloadCDNMgr, OpenDownloadMgr, OpenUploadCDNMgr, OpenUploadMgr, RecordDownloadCDNMgr, RecordUploadCDNMgr, ShortVideoDownloadMgr, ThumbDownloadMgr, UploadImageCDNMgr, UploadImageMgr, UploadVideoCDNMgr;

@interface CMessageMgr : MMService <IMessageWrapImgExt, IClearDataMgrExt, MessageWrapImgDelegate, MessageObserverDelegate, MMService, IAudioToMessageExt, IVideoExt, IEmoticonExt, PBMessageObserverDelegate, MMKernelExt, IMsgExt, UploadImageCDNMgrDelegate, OpenDownloadCDNMgrDelegate, OpenUploadMgrDelegate, OpenUploadCDNMgrDelegate, RecordUploadCDNMgrDelegate>
{
    CMessageDB *m_oMsgDB;
    CUploadVideoMgr *m_oUploadVideoMgr;
    CDownloadVideoMgr *m_oDownloadVideoMgr;
    CEmoticonUploadMgr *m_oEmoticonUploadMgr;
    CEmoticonDownloadMgr *m_oEmoticonDownloadMgr;
    _Bool m_bCheckQueue;
    OpenUploadMgr *m_oOpenUploadMgr;
    OpenDownloadMgr *m_oOpenDownloadMgr;
    MessagePatternCacheMgr *m_oMessagePatternMgr;
    UploadImageMgr *m_oUploadImageMgr;
    DownloadImageMgr *m_oDownloadImageMgr;
    UploadImageCDNMgr *m_oUploadImageCdnMgr;
    DownloadImageCDNMgr *m_oDownloadImageCdnMgr;
    ThumbDownloadMgr *m_oThumbDownloadMgr;
    UploadVideoCDNMgr *m_oUploadVideoCdnMgr;
    DownloadVideoCDNMgr *m_oDownloadVideoCdnMgr;
    ShortVideoDownloadMgr *m_oShortVideoDownloadMgr;
    OpenUploadCDNMgr *m_oOpenUploadCDNMgr;
    OpenDownloadCDNMgr *m_oOpenDownloadCDNMgr;
    RecordUploadCDNMgr *m_oRecordUploadCDNMgr;
    RecordDownloadCDNMgr *m_oRecordDownloadCDNMgr;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSDate *m_dateLastNotifySentFail;
    NSMutableDictionary *m_dicSentFailMsg;
}

+ (id)GetPathOfOpenUploadCDNFile;
+ (id)GetPathOfOpenUploadFile;
- (void).cxx_destruct;
- (void)updateVideoDownloadModeWithClientId:(id)arg1 downloadMode:(unsigned long long)arg2;
- (_Bool)IsVideoDataAvailableByClientMediaId:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;
- (_Bool)RequestVideoDataByClientMediaID:(id)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3 durationSec:(unsigned int)arg4;
- (_Bool)IsVideoMoovHasDownloadedByMessageWrap:(id)arg1;
- (id)getImageMsg:(id)arg1 beforeCreateTime:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)getImageMsg:(id)arg1 limit:(unsigned int)arg2;
- (void)onUploadCDNRecordMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onDownOpenMsgModMsg:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onUploadCDNAppMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onUploadAppMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onUploadImageCheckQQ;
- (void)onUploadImageModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onUploadImageModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (id)onGetMsg:(id)arg1 LocalID:(unsigned int)arg2 Wrap:(id)arg3;
- (void)onGetBigImageErrorWithWrap:(id)arg1;
- (void)onGetBigImageResultWithWrap:(id)arg1 image:(id)arg2 imageData:(id)arg3 isSaveImgOK:(_Bool)arg4;
- (void)onUploadImageRequestWithWrap:(id)arg1;
- (void)enterBackground;
- (void)enterForeground;
- (void)reSendAllMsgFromNotificationDone;
- (id)getSentFailMsgs;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onAuthOK;
- (id)getSemaphore;
- (_Bool)IsRecordMsgDownloading:(id)arg1;
- (void)StopDownloadRecordMsg:(id)arg1;
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2 thumb:(_Bool)arg3 data:(_Bool)arg4;
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2;
- (void)StartDownloadByRecordMsg:(id)arg1;
- (void)StopUploadRecordMsgByUsername:(id)arg1;
- (void)StopUploadRecordMsg:(id)arg1;
- (void)ResendRecordMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddRecordMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)StartDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2 AttachId:(id)arg3 AttachDataSize:(unsigned int)arg4 AttachFileExt:(id)arg5;
- (_Bool)InAppAttachDownloading:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)InAppAttachDownloading:(id)arg1 MsgWrap:(id)arg2 AttachId:(id)arg3;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1 stateDidChanged:(CDUnknownBlockType)arg2;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 CacheMask:(unsigned int)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1;
- (void)addAutoCleanTask;
- (unsigned int)GetDownloadThumbStatus:(id)arg1;
- (_Bool)StartDownloadThumb:(id)arg1;
- (unsigned int)GetUploadPercent:(id)arg1;
- (void)StopDownloadImage:(id)arg1;
- (void)StartDownloadImage:(id)arg1 HD:(_Bool)arg2 AutoDownload:(_Bool)arg3;
- (id)GetAppMsgList:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4;
- (id)GetAppMsgList:(id)arg1 AfterID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4;
- (unsigned int)GetImgOrVideoMsgCount:(id)arg1;
- (unsigned int)GetImgOrVideoMsgCount:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3;
- (id)GetImgOrVideoOrAppNextMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4;
- (id)GetImgOrVideoLastMsg:(id)arg1;
- (id)GetImgOrVideoOrAppLastMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4;
- (id)GetImgAndVideoMsgList:(id)arg1;
- (id)GetImgMsgList:(id)arg1;
- (unsigned int)GetImgMsgCount:(id)arg1;
- (unsigned int)GetImgMsgCount:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3;
- (id)GetImgLastMsg:(id)arg1;
- (id)GetImgLastMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3;
- (id)GetImgNextMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3;
- (void)onServiceClearData;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceInit;
- (void)CheckQQPwd;
- (void)PostUpdateVideoMsgs:(id)arg1;
- (void)UpdateVideoMsg:(id)arg1;
- (void)PreUpdateVideoMsgs:(id)arg1;
- (void)OnErrorByReceiver:(id)arg1 ErrNo:(int)arg2;
- (void)OnErrorBySender:(id)arg1 ErrNo:(int)arg2;
- (void)OnMessageSentBySender:(id)arg1;
- (void)OnAddMessageByReceiver:(id)arg1;
- (void)OnAddMessageBySender:(id)arg1;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleSvrCmd:(id)arg1 MsgWrap:(id)arg2;
- (void)DelMsgPatten:(id)arg1 MsgWrap:(id)arg2;
- (id)GetLastMsgToUsr:(id)arg1;
- (id)GetLastMsgFromUsr:(id)arg1;
- (void)ModVoipMsgStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)CheckQueue;
- (id)GetRealChatName:(id)arg1;
- (void)StopUploadAppAttach:(id)arg1 MsgWrap:(id)arg2;
- (void)StopDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2;
- (void)StartDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2;
- (void)AddAppMsg:(id)arg1 MsgWrap:(id)arg2 Data:(id)arg3 Scene:(unsigned int)arg4;
- (void)AddAppMsg:(id)arg1 MsgWrap:(id)arg2 DataPath:(id)arg3 Scene:(unsigned int)arg4;
- (void)StartUploadAppMsg:(id)arg1 MsgWrap:(id)arg2 Scene:(unsigned int)arg3;
- (void)SetGetLocationEnd:(id)arg1 MsgWrap:(id)arg2;
- (void)UpdateEmoticonMsg:(id)arg1;
- (void)SetEmoticonGameEnd:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)StopDownloadEmoticonMsgWrapByChatName:(id)arg1 n64SvrID:(long long)arg2;
- (void)UpgradePriorityForMsgWrap:(id)arg1;
- (_Bool)StartDownloadEmoticonMsgWrap:(id)arg1 HighPriority:(_Bool)arg2;
- (_Bool)isChatStatusNotifyOpenForMsgWrap:(id)arg1;
- (void)AddEmoticonMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)AddBackupMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)backupMsgSrvIDExit:(id)arg1 MsgWrap:(id)arg2;
- (id)backupGetMsg:(id)arg1 n64SvrID:(long long)arg2;
- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2 fixTime:(_Bool)arg3 NewMsgArriveNotify:(_Bool)arg4;
- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2 fixTime:(_Bool)arg3 NewMsgArriveNotify:(_Bool)arg4 Unique:(_Bool)arg5;
- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddUniqueLocalMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddPimMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)DropChatTable:(id)arg1;
- (void)AddFloatBottle:(id)arg1 MsgWrap:(id)arg2;
- (void)downLoadRemainPart:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)delayDownloadVideoRemainPart:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)StopDownloadVideoByChatName:(id)arg1;
- (void)StopDownloadVideo:(id)arg1 MsgWrap:(id)arg2;
- (void)StopDownloadVideo:(id)arg1 MsgWrap:(id)arg2 Result:(struct CDNDownloadResult *)arg3;
- (unsigned long long)GetVideoMessageDownloadMode:(id)arg1;
- (unsigned long long)GetVideoMessageDownloadModeFromCDNTask:(id)arg1;
- (unsigned long long)StartDownloadVideo:(id)arg1 MsgWrap:(id)arg2 Priority:(_Bool)arg3 DownloadMode:(unsigned long long)arg4;
- (void)StartDownloadVideo:(id)arg1 MsgWrap:(id)arg2 Priority:(_Bool)arg3;
- (void)StartDownloadVideo:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)InternalStartDownloadShortVideo:(id)arg1 AutoDownload:(_Bool)arg2;
- (void)StartDownloadShortVideo:(id)arg1;
- (void)StopUploadVideoByChatName:(id)arg1;
- (void)StopUploadVideo:(id)arg1 MsgWrap:(id)arg2;
- (void)StartUploadVideo:(id)arg1 MsgWrap:(id)arg2;
- (void)AddShortVideoLocalMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3 MsgType:(unsigned int)arg4;
- (void)AddVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3 MsgType:(unsigned int)arg4;
- (void)ResendSightMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddShortVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3;
- (void)AddVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3;
- (void)UpdateMessage:(id)arg1 MsgWrap:(id)arg2;
- (void)UpdateVoiceMessage:(id)arg1 MsgWrap:(id)arg2;
- (void)UpdateVoiceStatus:(id)arg1 LocalID:(unsigned int)arg2 DownloadStatus:(unsigned int)arg3;
- (id)GetRevokeMsgBySvrId:(long long)arg1;
- (unsigned int)GetMesCount:(id)arg1 MesType:(unsigned int)arg2;
- (unsigned int)GetAllMesCount:(id)arg1;
- (unsigned int)GetUnReadCountInHello:(id)arg1;
- (unsigned int)GetCountInHello:(id)arg1;
- (unsigned int)GetUnReadCount:(id)arg1 CreateTimeLargerThan:(unsigned int)arg2;
- (unsigned int)GetUnReadCount:(id)arg1;
- (void)autoEmptyTrashTable;
- (void)emptyTrashTable;
- (void)DelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)DelAllMsgs:(id)arg1;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(_Bool)arg3;
- (void)ClearUnreadForSync:(id)arg1 CreateTime:(unsigned int)arg2;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (unsigned int)GetSayHelloStatus:(id)arg1 LocalID:(unsigned int)arg2;
- (_Bool)SetSayHelloStatus:(id)arg1 LocalID:(unsigned int)arg2 Status:(unsigned int)arg3;
- (void)AddHelloMsgList:(id)arg1 MsgList:(id)arg2;
- (void)AddHelloMsg:(id)arg1 MsgWrap:(id)arg2 HelloUser:(id)arg3 OpCode:(unsigned int)arg4 DES:(unsigned int)arg5 checkCreateTime:(_Bool)arg6 status:(unsigned int)arg7;
- (_Bool)ClearHelloUnRead:(id)arg1 HelloUser:(id)arg2;
- (void)DelHelloMsg:(id)arg1 HelloUser:(id)arg2;
- (id)GetHelloMsg:(id)arg1 HelloUser:(id)arg2 Limit:(unsigned int)arg3 OnlyTo:(_Bool)arg4;
- (id)GetHelloUsers:(id)arg1 Limit:(unsigned int)arg2 OnlyUnread:(_Bool)arg3;
- (void)CheckMessageStatus:(id)arg1 Msg:(id)arg2;
- (id)GetFirstUnreadMsgIncludingNewXML:(id)arg1;
- (id)GetFirstUnreadMsg:(id)arg1;
- (id)GetLastInsertMsg:(id)arg1;
- (id)GetLastMsg:(id)arg1;
- (unsigned int)GetTextMsgCount:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (id)GetTextMsg:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (id)GetTextMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)getMessageWrapArray:(id)arg1 bizId:(id)arg2;
- (id)GetMsg:(id)arg1 BizMsgClientID:(id)arg2;
- (id)GetMsg:(id)arg1 n64SvrID:(long long)arg2;
- (id)GetMsg:(id)arg1 LocalID:(unsigned int)arg2;
- (id)QueryMsgFromChat:(id)arg1 queryText:(id)arg2 FromID:(unsigned int)arg3 FromCreateTime:(unsigned int)arg4 Limit:(unsigned int)arg5 LeftCount:(unsigned int *)arg6;
- (id)GetDownMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4 LeftCount:(unsigned int *)arg5;
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4 LeftCount:(unsigned int *)arg5 FromSequence:(unsigned int)arg6;
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4 LeftCount:(unsigned int *)arg5;
- (id)GetFirstMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4 LeftCount:(unsigned int *)arg5;
- (id)GetLastMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(unsigned int)arg4 LeftCount:(unsigned int *)arg5;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(unsigned int)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (void)AddMsgPattern:(id)arg1;
- (void)HandleMsgList:(id)arg1 MsgList:(id)arg2;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)ModMsgWithoutNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onRevokeMsg:(id)arg1;
- (void)onRevokeMsgCgiReturn:(id)arg1;
- (_Bool)RevokeMsg:(id)arg1 MsgWrap:(id)arg2 Counter:(unsigned int)arg3;
- (void)AsyncOnCheckQQ;
- (void)AsyncOnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)IsVideoMsgdDownloadIng:(id)arg1;
- (_Bool)IsVideoMsgUploadIng:(id)arg1;
- (void)InitMsgMgr:(id)arg1 Lock:(id)arg2;
- (_Bool)SaveMesVoice:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)SaveMsgThumb:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)SaveMesImg:(id)arg1 MsgWrap:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)MainThreadNotifyToExt:(id)arg1;
- (void)AsyncOnPushMsg:(id)arg1;
- (void)AsyncOnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AsyncOnSendVoiceError:(id)arg1 MsgWrap:(id)arg2 ErroNO:(unsigned int)arg3;
- (void)AsyncOnUnReadChange:(id)arg1;
- (void)AsyncOnDelMsg:(id)arg1 DelAll:(_Bool)arg2;
- (void)AsyncOnDelMsg:(id)arg1;
- (void)AsyncOnMsgNotAddDBSession:(id)arg1 MsgList:(id)arg2;
- (void)AsyncOnSpecialSession:(id)arg1 MsgList:(id)arg2;
- (void)AsyncOnNotAddDBMessage:(id)arg1 MsgWrap:(id)arg2;
- (void)AsyncOnAddMsgForSession:(id)arg1 MsgWrap:(id)arg2 NewMsgArriveNotify:(_Bool)arg3;
- (void)AsyncOnAddMsgForSession:(id)arg1 MsgWrap:(id)arg2;
- (void)AsyncOnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)AsyncOnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AsyncOnPreAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)UpdateVideoStatus:(id)arg1;
- (_Bool)IsRecordMsgUploading:(id)arg1;
- (_Bool)IsImageMsgUploadIng:(id)arg1;
- (id)escapeKeywordForQueryString:(id)arg1;
- (_Bool)isContact:(id)arg1 ConfirmToQueryString:(id)arg2;
- (void)BackGroundAddHelloMsg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
