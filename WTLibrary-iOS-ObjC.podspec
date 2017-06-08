#
# Be sure to run `pod lib lint WTLibrary-iOS-ObjC.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'WTLibrary-iOS-ObjC'
  s.version          = '0.1.2'
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

  s.source_files = 'WTLibrary-iOS-ObjC/Classes/**/*'
  
  # s.resource_bundles = {
  #   'WTLibrary-iOS-ObjC' => ['WTLibrary-iOS-ObjC/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
  s.dependency 'AGWindowView', '~> 0.1'
  s.dependency 'Reachability', '~> 3.2'
  s.dependency 'FMDB', '~> 2.0'
end
