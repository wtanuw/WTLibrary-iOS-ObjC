#
# Be sure to run `pod lib lint WTLibrary-iOS-ObjC.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'WTLibrary-iOS-ObjC'
  s.version          = '0.2.0'
  s.summary          = 'A simple life with WTLibrary-iOS-ObjC.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
A simple life with WTLibrary-iOS-ObjC.
                       DESC

  s.homepage         = 'https://github.com/wtanuw/WTLibrary-iOS-ObjC'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'wtanuw' => 'wat_wtanuw@hotmail.com' }
  s.source           = { :git => 'https://github.com/wtanuw/WTLibrary-iOS-ObjC.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  # s.source_files = 'WTLibrary-iOS-ObjC/Classes/**/*'
  
  # s.resource_bundles = {
  #   'WTLibrary-iOS-ObjC' => ['WTLibrary-iOS-ObjC/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'

  s.default_subspec = 'WTMaster'



##################################################

s.subspec 'WTMaster' do |subspec|
subspec.source_files = 'WTLibrary-iOS-ObjC/Classes/WT*.{h,m}'
subspec.frameworks = 'UIKit', 'QuartzCore'
end

##################################################

s.subspec 'AQGridViewHorizontal' do |subspec|
subspec.dependency 'WTLibrary-iOS-ObjC/WTMaster'
subspec.source_files = 'WTLibrary-iOS-ObjC/Classes/AQGridViewHorizontal/*.{h,m}'
subspec.frameworks = 'UIKit', 'QuartzCore'
end

##################################################

s.subspec 'CategoriesExtension' do |subspec|
subspec.dependency 'WTLibrary-iOS-ObjC/WTMaster'
subspec.source_files = 'WTLibrary-iOS-ObjC/Classes/CategoriesExtension/*.{h,m}'
subspec.frameworks = 'UIKit', 'QuartzCore'
end

##################################################

s.subspec 'CategoriesExtensionMD5' do |subspec|
subspec.dependency 'WTLibrary-iOS-ObjC/WTMaster'
subspec.source_files = 'WTLibrary-iOS-ObjC/Classes/CategoriesExtensionMD5/*.{h,m}'
end

##################################################

s.subspec 'MetadataRetriever' do |subspec|
subspec.dependency 'WTLibrary-iOS-ObjC/WTMaster'
subspec.source_files = 'WTLibrary-iOS-ObjC/Classes/MetadataRetriever/*.{h,m}'
subspec.frameworks = 'AudioToolbox', 'AssetsLibrary', 'AVFoundation', 'UIKit',
end

##################################################

s.subspec 'WTDatabase' do |subspec|
subspec.dependency 'WTLibrary-iOS-ObjC/WTMaster'
subspec.dependency 'FMDB', '~> 2.0'
subspec.source_files = 'WTLibrary-iOS-ObjC/Classes/WTDatabase/*.{h,m}'
end

##################################################

s.subspec 'WTDropbox' do |subspec|
subspec.dependency 'WTLibrary-iOS-ObjC/WTMaster'
subspec.dependency 'ObjectiveDropboxOfficial'
subspec.source_files = 'WTLibrary-iOS-ObjC/Classes/WTDropbox/*.{h,m}'
end

##################################################

s.subspec 'WTGoogle' do |subspec|
subspec.dependency 'WTLibrary-iOS-ObjC/WTMaster'
subspec.dependency 'GoogleAPIClientForREST/Drive', '~> 1.1.1'
subspec.dependency 'GTMOAuth2', '~> 1.1.4'
subspec.dependency 'GTMAppAuth'
#subspec.dependency 'Google/SignIn'
subspec.source_files = 'WTLibrary-iOS-ObjC/Classes/WTGoogle/*.{h,m}'
subspec.vendored_frameworks = 'WTLibrary-iOS-ObjC/Classes/WTGoogle/GoogleAppUtilities.framework'
subspec.vendored_frameworks = 'WTLibrary-iOS-ObjC/Classes/WTGoogle/GoogleSignIn.framework'
subspec.vendored_frameworks = 'WTLibrary-iOS-ObjC/Classes/WTGoogle/GoogleSignInDependencies.framework'
subspec.vendored_frameworks = 'WTLibrary-iOS-ObjC/Classes/WTGoogle/GoogleSymbolUtilities.framework'
subspec.resource = 'WTLibrary-iOS-ObjC/Classes/WTGoogle/GoogleSignIn.bundle'
subspec.frameworks = 'SafariServices', 'SystemConfiguration'
end

##################################################

s.subspec 'WTLocation' do |subspec|
subspec.dependency 'WTLibrary-iOS-ObjC/WTMaster'
subspec.source_files = 'WTLibrary-iOS-ObjC/Classes/WTLocation/*.{h,m}'
end

##################################################

s.subspec 'WTSNS' do |subspec|
subspec.dependency 'WTLibrary-iOS-ObjC/WTMaster'
subspec.source_files = 'WTLibrary-iOS-ObjC/Classes/WTSNS/*.{h,m}'
subspec.frameworks = 'Twitter', 'Social', 'Accounts'
end

##################################################

s.subspec 'WTStoreKit' do |subspec|
subspec.dependency 'WTLibrary-iOS-ObjC/WTMaster'
subspec.dependency 'Reachability', '~> 3.2'
subspec.source_files = 'WTLibrary-iOS-ObjC/Classes/WTStoreKit/*.{h,m}'
subspec.frameworks = 'StoreKit', 'Security'
end

##################################################

s.subspec 'WTSwipeModalView' do |subspec|
subspec.dependency 'WTLibrary-iOS-ObjC/WTMaster'
subspec.dependency 'AGWindowView', '~> 0.1'
subspec.source_files = 'WTLibrary-iOS-ObjC/Classes/WTSwipeModalView/*.{h,m}'
end

##################################################

s.subspec 'WTUIKit' do |subspec|
subspec.dependency 'WTLibrary-iOS-ObjC/WTMaster'
subspec.source_files = 'WTLibrary-iOS-ObjC/Classes/WTUIKit/*.{h,m}'
subspec.frameworks = 'UIKit', 'QuartzCore'
end

##################################################

s.subspec 'WTUtaPlayer' do |subspec|
subspec.dependency 'WTLibrary-iOS-ObjC/WTMaster'
subspec.source_files = 'WTLibrary-iOS-ObjC/Classes/WTUtaPlayer/*.{h,m}'
subspec.frameworks = 'AVFoundation'
end

##################################################

end



