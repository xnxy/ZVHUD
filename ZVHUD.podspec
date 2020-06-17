#
#  Be sure to run `pod spec lint ZVProgressHUD.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "ZVHUD"
  spec.version      = "0.0.2"
  spec.summary      = "对SVProgressHUD的二次封装"
  spec.homepage     = "https://github.com/xnxy/ZVHUD.git"
  spec.license      = { :type => "MIT", :file => "LICENSE" }
  spec.author             = { "拿根针尖对麦芒" => "1661583063@qq.com" }
  spec.platform     = :ios, "8.0"
  spec.source       = { :git => "https://github.com/xnxy/ZVHUD.git", :tag => "#{spec.version}" }
  spec.source_files  = "ZVHUD/ZVProgressHUD/ZVProgressHUD/*.{h,m}"
  spec.public_header_files = "ZVHUD/ZVProgressHUD/ZVProgressHUD/*.h"
  spec.dependency 'SVProgressHUD', '~> 2.2.5'

end
