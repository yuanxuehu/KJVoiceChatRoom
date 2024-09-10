# 语聊房UIKit方案

# 1.项目介绍
## 1.1 概述
**
**语聊 UIKit 开源方案，完整的示例项目（AUIVoiceRoom）：

**语聊 UIKit 方案集成了声网的实时互动（RTC）、实时消息（RTM）、即时通讯 IM（前端）和环信 IM（后端），实现房间管理、麦位控制、聊天打赏和音频特效等核心功能。用户可以通过音频连麦互动，使用文字消息辅助聊天，并通过弹幕和礼物活跃房间气氛。UIKit 方案具有模块化 UI、强大拓展性、开发时间短、学习成本低等优势

**实现语聊房
**使用 UIKit 组件从 0 开始实现一个极简语音聊天室，包括 UIKit 组件的集成，语音聊天室的创建与销毁，以及用户进房和退房等功能。

**声动语聊解决方案提供两种技术方案：PaaS 方案和 UIKit 开源方案

**UIKit 开源方案
灵活开发：交互逻辑完全在客户端实现，修改业务逻辑时无需依赖后端介入，更加灵活。
全面功能演示：含有最新的功能迭代，提供更全面的效果演示能力。
丰富最佳实践参考：积累了丰富的语聊集成最佳实践，为开发者提供更多可参考的代码逻辑。
模块化的 UI：支持你使用语聊 UI 组件提供的互动、送礼物、直播等模块化的 UI 快速搭建语聊业务逻辑，就像搭积木一样灵活方便。
低学习成本、短开发时间：无需深入理解模型层逻辑即可自定义 UI。只需修改几行代码，便可在几分钟内运行 AUIVoiceRoom 的示例项目。声网推荐开发者在人力有限或项目周期紧迫的情况下选择含 UI 组件的方案。
强大的拓展性：当有更灵活的自定义需求时，可以利用 AUIKit 提供的 UI 和 Service 组件进行进一步开发。

## 1.2 运行示例
* 运行语聊房项目，请参考以下流程
    * [声网UIKit方案参考](https://github.com/AgoraIO-Community/AUIVoiceRoom/tree/main/iOS/AUIVoiceRoom)

## 1.3 后台配置关键参数
* AppId 声网APP ID
    * 进入声网控制台(https://console.shengwang.cn/)，创建一个项目，进入项目配置页，即可看到APP ID。
    
* AppCertificate 声网APP证书
    * 进入声网控制台(https://console.shengwang.cn/)，创建一个带证书鉴权的项目，进入项目配置页，即可看到APP证书。
    
* IMAppKey 环信APPKEY
    * 获取环信即时通讯IM的信息(http://docs-im-beta.easemob.com/product/enable_and_configure_IM.html#%E8%8E%B7%E5%8F%96%E7%8E%AF%E4%BF%A1%E5%8D%B3%E6%97%B6%E9%80%9A%E8%AE%AF-im-%E7%9A%84%E4%BF%A1%E6%81%AF）

* IMClientId 环信的 client id，用于生成 app token 调用 REST API。如需使用语聊房场景，需要设置该参数。
    * 环信即时通讯云控制台(https://console.easemob.com/user/login/)

* IMClientSecret 环信Client Secret，用于生成 app token 调用 REST API。如需使用语聊房场景，需要设置该参数。
    * 环信即时通讯云控制台(https://console.easemob.com/user/login/)

* HostUrl 后端微服务域名
