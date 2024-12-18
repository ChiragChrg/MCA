const MyLog = require('./log.js')
const MyMessage = require('./message.js')

MyLog.info("Aloysius info")
MyLog.warning("Aloysius warning")
MyLog.error("Aloysius error")

console.log("Message : " + MyMessage.simpleMessage)