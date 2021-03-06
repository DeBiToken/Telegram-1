#import "TLauth_SentCode.h"

@class TLauth_SentCodeType;
@class TLauth_CodeType;
@class TLhelp_TermsOfService;

@interface TLauth_SentCode$auth_sentCode : TLauth_SentCode

@property (nonatomic) int32_t flags;
@property (nonatomic, strong) TLauth_SentCodeType *type;
@property (nonatomic, strong) NSString *phone_code_hash;
@property (nonatomic, readonly) bool phone_registered;
@property (nonatomic, strong) TLauth_CodeType *next_type;
@property (nonatomic) int32_t timeout;
@property (nonatomic, strong) TLhelp_TermsOfService *terms_of_service;

@end
