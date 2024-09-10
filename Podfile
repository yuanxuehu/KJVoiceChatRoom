# Uncomment the next line to define a global platform for your project
# platform :ios, '13.0'

target 'KJVoiceChatRoom' do
  # Comment the next line if you don't want to use dynamic frameworks
  use_frameworks!

  # Pods for KJVoiceChatRoom
  pod 'AScenesKit', :path => './AScenesKit.podspec'
  pod 'AgoraLyricsScore', '1.1.6'
  pod 'AgoraRtcEngine_Special_iOS', '4.1.1.20'
  
 #When pod install occur errors, the low version of the three-party library reports an error. You can fill in your teamId and the minimum iOS version currently supported by Xcode and open the comment below.
  post_install do |installer|
    installer.generated_projects.each do |project|
      project.targets.each do |target|
        target.build_configurations.each do |config|
          config.build_settings["IPHONEOS_DEPLOYMENT_TARGET"] = "13.0"
        end
      end
    end
  end
end
