import smtplib
from sys import argv
from email.mime.text import MIMEText
from email.header import Header

message = MIMEText(_text=argv[2], _subtype="plain", _charset="utf-8")
message["From"] = Header("Xu Chenxuan", "utf-8")
#message["To"] = Header("Xu Chenxuan", "utf-8")
message["Subject"] = Header("GXOJ 验证码", "utf-8")
smtpob = smtplib.SMTP()
mail_host = "smtp.qq.com"

#f = open("email.log", "a")

try:
    smtpob.connect(host=mail_host, port=587)
    smtpob.login(user="3562907147@qq.com", password="jpnusaombksecidi")
    sender = "3562907147@qq.com"
    receiver = [argv[1]]
    smtpob.sendmail(sender, receiver, message.as_string())
    #print("邮件发送成功")
    #f.write("ok\n")
except smtplib.SMTPException:
    pass
    #f.write("fail\n")
    #print("邮件发送失败")

