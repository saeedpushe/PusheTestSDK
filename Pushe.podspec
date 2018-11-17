Pod::Spec.new do |s|
s.name         = 'Pushe'
s.module_name  = 'PusheApp'
s.version='1.0.1'
s.summary      = 'Connect your users with Pushe realtime messaging or send push notifications to them.'
s.description  = <<-DESC
Pushe provides your app with in-app messaging and easy geo-location features.
DESC

s.requires_arc = true

s.homepage     = 'https://github.com/saeedpushe/PusheTestSDK'
s.license =    { :type => 'proprietary', :text => <<-LICENSE
Copyright 2015 - present Pushe. All rights reserved.
LICENSE
}
s.author       = { 'Pushe' => 'hell@hell.com' }
s.source = { :http => 'https://github.com/saeedpushe/PusheTestSDK/raw/master/Pushe.framework.zip' }

s.platform = :ios
s.ios.deployment_target = '7.0'

end

