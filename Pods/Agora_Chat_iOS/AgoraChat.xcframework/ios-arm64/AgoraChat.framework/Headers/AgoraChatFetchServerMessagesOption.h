//
//  AgoraChatFetchServerMessagesOption.h
//  AgoraChat
//
//  Created by li xiaoming on 2023/4/10.
//  Copyright © 2023 easemob.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AgoraChatConversation.h"

NS_ASSUME_NONNULL_BEGIN

/**
 *  
 *  The parameter configuration class for pulling historical messages from the server.
 */
 
@interface AgoraChatFetchServerMessagesOption: NSObject
 
@property (nonatomic,strong) NSString* _Nullable from; /**  The user ID of the message sender in the group conversation.*/
 
@property (nonatomic,strong) NSArray<NSNumber*>* _Nullable msgTypes; /**  The array of message types for query. The default value is `null`, indicating that all types of messages are retrieved. */
 
@property (nonatomic) NSInteger startTime; /**  The start time for message query. The time is a UNIX time stamp in milliseconds. The default value is `-1`, indicating that this parameter is ignored during message query. If the start time is set to a specific time spot and the end time uses the default value `-1`, the SDK returns messages that are sent and received in the period that is from the start time to the current time. If the start time uses the default value `-1` and the end time is set to a specific time spot, the SDK returns messages that are sent and received in the period that is from the timestamp of the first message to the current time.*/
 
@property (nonatomic) NSInteger endTime; /**  The end time for message query. The time is a UNIX time stamp in milliseconds. The default value is `-1`, indicating that this parameter is ignored during message query. If the start time is set to a specific time spot and the end time uses the default value `-1`, the SDK returns messages that are sent and received in the period that is from the start time to the current time. If the start time uses the default value `-1` and the end time is set to a specific time spot, the SDK returns messages that are sent and received in the period that is from the timestamp of the first message to the current time.*/
 
@property (nonatomic) AgoraChatMessageSearchDirection direction; /**  The message search direction. See {@link AgoraChatConversation.AgoraChatMessageSearchDirection}.  */
 
@property (nonatomic) BOOL isSave; /**  Whether to save the retrieved messages to the database: -`YES`: Yes; -`NO`：No.*/
 
@end

NS_ASSUME_NONNULL_END
