# HUSTOJ

> 流行的OJ系统，跨平台、易安装、有题库。

常见问题请先查阅
--
**[FAQ](https://github.com/zhblue/hustoj/blob/master/wiki/FAQ.md)**


## 目录

**[模板演示](#自带的模板演示)**

**[版权说明](#版权说明)**

**[致谢](#感谢下述及其他被使用到的开源代码项目贡献者)**

**[更新日志](#更新日志)**

<details>
	<summary><b>安装说明</b></summary>
<br>
	
[安装说明](#安装说明)
	
[注意事项](#注意事项)
	
[系统演示](#系统演示)

[硬件需求](#硬件需求)

[校园网安装](#校园网安装)

[基于 Ubuntu 20.04 安装](#基于-ubuntu-2004-安装)  ***新手首选, 各类软件最新，最容易操作成功***

[Ubuntu 更换软件源](#ubuntu-更换软件源)

[基于Deepin深度安装](#基于 Deepin 20+ 安装)

[基于CentOS安装](#基于-centos-安装)

[基于Docker安装](#基于-docker-安装)

[基于其他发行版安装](#基于其他发行版安装)

[LiveCD下载安装](#livecd下载安装)

[卸载阿里云盾](#卸载阿里云盾)
	
	
</details>

<details>
	<summary><b>装后须知</b></summary>	
<br>
	
[装后须知](#装后须知)

[备份](#备份)

[迁移](#迁移)

[更新升级](#更新升级)

[修复](#修复)
	
[二次开发](https://github.com/zhblue/hustoj/blob/master/wiki/SecondaryDevelopment.md)

</details>

**[支持捐助、加入社区](#支持捐助加入社区)**

**[免费题库](#免费题库)**

**[求助 报错](https://github.com/zhblue/hustoj/issues/new/choose)**

如果您喜欢在线聊天，希望问题获得及时反馈，不介意付费获得服务，请加官方QQ群 `23361372` ：[点我加群](https://shang.qq.com/wpa/qunwpa?idkey=d52c3b12ddaffb43420d308d39118fafe5313e271769277a5ac49a6fae63cf7a)


## 自带的5种模板演示

[bs3原版](http://bs3.hustoj.com/)

[sweet主题](http://sweet.hustoj.com/)

[syzoj主题](http://syzoj.hustoj.com/)  added by[@renbaoshuo](https://github.com/renbaoshuo)

[bshark主题](http://bshark.hustoj.com/)  added by [@yemaster](https://github.com/yemaster)

[mdui主题](http://mdui.hustoj.com/)  added by[@renbaoshuo](https://github.com/renbaoshuo)

> 修改 `db_info.inc.php[默认位置/home/judge/src/web/include]` 中 `$OJ_TEMPLATE` 的值，即可使用上述模板。


## 版权说明

HUSTOJ is an [GPL](https://github.com/zhblue/hustoj/blob/master/trunk/web/gpl-2.0.txt) Free Software.

HUSTOJ 是采用 GPL 的自由软件。(仅限原创部分代码，其中使用了其他开源项目的组件，请遵循原组件的协议。)

## 感谢下述及其他被使用到的开源代码项目贡献者，来自这些项目的代码及衍生代码遵循其原有开源协议，不受本项目的GPL授权影响。

* masteroj uoj loj syzoj zoj qduoj openJudger
* linux apache nginx php mysql mariadb memcached
* bootstrap kindeditor ACEeditor blockly codemirror katex phpfilemanager mdui
* sim gcc clang openjdk freepascal mono docker SyntaxHighlighter 

排名不分先后本列表欢迎补充

## 注意：基于本项目源码从事科研、论文、系统开发，请在文中或系统中表明来自于本项目的内容和创意。

论文请引用参考文献 [基于开放式云平台的开源在线评测系统设计与实现](http://kns.cnki.net/KCMS/detail/detail.aspx?dbcode=CJFQ&dbname=CJFD2012&filename=JSJA2012S3088) 

如果打算进行二次开发， [Wiki](https://github.com/zhblue/hustoj/tree/master/wiki) 和这份 [文档](https://zhblue.github.io/hustoj) 可能有帮助。

PS: GPL保证你可以合法忽略以上注意事项但不能保证你不受鄙视，呵呵。

常见问题自动应答微信公众号:`hustoj`          <img src="http://hustoj.com/wx.jpg" height="180" />

关注后回复： 新装系统、升级、目录等关键词，系统会自动回复相关帮助。

有问题请先查阅 **[FAQ常见问答](https://github.com/zhblue/hustoj/blob/master/wiki/FAQ.md)** 和 **[Wiki使用技巧](https://github.com/zhblue/hustoj/tree/master/wiki)** 或使用搜索引擎。 


如果这个项目对你有用，请：

* 挥动鼠标，右上角给个 `**Star**` !
* 保留网站页脚的二维码
* 访问 [tk题库](http://tk.hustoj.com) ，充值下载题目
* 向同学同事推荐这个项目
* 每天扫一扫本页底部的支付宝红包
* 在您的论文参考文献中写出本项目的网址

Star us, please!

## 更新日志

<details open>
	
<summary><b>2022年</b></summary>

  日期  | 类型 |  更新内容
------- | :--: | :-------
12-14 | 更新 | 手机界面优化，单IP登录限制。
12-06 | 致敬 | 长者一路走好！
11-30 | 更新 | syzoj皮肤增加了利用localStorage自动保存临时代码的功能。
11-18 | 更新 | 管理后台帮助页首行增加服务器状态。
11-16 | 补丁 | 给Docker容器中的/usr/include/c++/9/iostream打补丁，禁用endl的cout.flush()操作，提高cout性能。
11-15 | 补丁 | 修复新版本golang报错Urgent I/O condition和 Forbidden system call:35 [35]
11-12 | 补丁 | 修补中间的特定数量题目以后，大序号的题目不显示的问题。
11-06 | 更新 | 增加简单的导入HydroOJ打包zip(yaml+目录)格式题目的功能，目前不支持图片等高级特性,老版本需要自行安装php-yaml(sudo apt install php-yaml)。
10-19 | 更新 | 将syzoj首页中的排名更换为标题为HelloWorld!的新闻内容，可在db_info.inc.php中配置$OJ_INDEX_NEWS_TITLE的值来选择要在首页显示的新闻。
10-18 | 更新 | 增加以csv格式导入用户列表的功能，如有中文内容，需以UTF-8编码。
10-12 | 更新 | 增加简单的导入QDUOJ打包zip(json+目录)格式题目的功能，目前不支持图片等高级特性。
10-08 | 更新 | 增加$OJ_MARKDOWN开关，实验性支持markdown语法，用[md] [/md]在源码模式嵌入题面和新闻，也支持&lt;div class='md' &gt;&lt;/div&gt;
10-05 | 更新 | 允许在题面、新闻中上传更多的文件类型。
09-19 | 更新 | 优化了露一手功能的页面布局
08-31 | 补丁 | QQ邮箱作为发件邮箱，不能发送找回密码邮件。
08-30 | 补丁 | 修复管理员前台不能翻页到最后几页，看不全题目。
08-29 | 补丁 | docker镜像切换阿里云后自动重新加载。
08-14 | 更新 | spj扩展了2=RawTextJudge，用于[选择填空题](https://github.com/zhblue/hustoj/blob/master/wiki/RTJ.md)的判题。
07-18 | 更新 | 存档很少人用的blockly目录到blockly.tar.gz, 未来从web目录中删除，留一个web下载链接在db_info.inc.php供需要的用户下载。
07-14 | 补丁 | 修复了论坛无贴打不开的问题。
07-10 | 补丁 | 修复了php8.1(Ubuntu22.04) 不能上传图片和不能压缩文件的问题。
06-05 | 更新 | 新增了HelloWorld公告，Cobol，Github的自动化集成测试增加判题测试，基于docker/Ubuntu22.04.
05-17 | 更新 | 对Ubuntu22.04及PHP8.1进行了针对性修复。
05-09 | 更新 | 增加了ubuntu20.04下的宝塔安装脚本与配套说明。
01-15 | 更新 | 测试数据文件管理器中增加生成.out文件和.ans文件批量改名功能。
01-12 | 补丁 | 修复nodejs，增加部分系统调用。
01-10 | 更新 | 移除部分老式代码，为php8.1进行兼容性调整，增加适用于Ubuntu22.04lts的安装脚本。
01-03 | 补丁 | 修复图片上传路径的问题。
01-01 | 补丁 | 修复Docker中-lm不能加载sqrt函数的问题。
 1月  | 喜讯 | star过2.5k!

</details>

<details>
<summary><b>2021年</b></summary>

  日期  | 类型 |  更新内容
------- | :--: | :-------
12-31 | 更新 | 增加UOS20安装脚本
12-21 | 更新 | 让题单plist元素可以收缩，标题链接打开新窗口。
12-18 | 更新 | 给admin下的problem_list等页增加汉化
12-16 | 补丁 | 给龙芯补充新的系统调用
10-17 | 更新 | 给默认syzoj添加discuss
10-16 | 更新 | 设置默认模板为syzoj
10-15 | 更新 | syzoj模板国际化字符串替换
10-12 | 更新 | SaaS模式实例 MyOJ 上线 http://my.hustoj.com/
09-30 | 更新 | 增加JudgeHub程序，为SaaS建立技术平台。
09-28 | 更新 | 增加友善级别$OJ_FRENDLY_LEVEL,辅助初级用户快速配置系统。
09-03 | 更新 | 增加管理员双击修改用户昵称的功能。
09-01 | 更新 | 新增一个OJ_AUTO_RESULT=4,让机器判断结果AC可以被设定为4或者14,4代表正确，14代表机器判断通过，等待人工复核。让拥有HTTP_JUDGE权限的用户手工给出结果。
08-17 | 补丁 | 修复了Mathlab等多种语言在Ubuntu20.04的运行环境，对docker增加了限制参数，对运行的环境变量做了统一。
07-11 | 更新 | 增加了新闻页对BBcode的支持，并增加了`[plist=1000,1001]题单名称[/plist]`语法，支持在新闻页中添加题单。
07-05 | 补丁 | 修补并增强了隐藏功能中的UOJ题目摘抄功能，使用时注意频率，请勿给UOJ带来过多流量压力。
06-22 | 补丁 | 修复其他模板运行结果自动刷新的问题。
06-20 | 补丁 | 修复其他模板部分静态资源不走CDN的问题。
06-20 | 补丁 | 修复bs3部分静态资源不走CDN的问题。
06-19 | 更新 | 允许设置不参与ranklist排名的管理员列表，$OJ_RANK_HIDDEN="'admin','zhblue'";
06-18 | 更新 | 允许在docker内使用外部的judge_client判题，方便更新judge_client。judge.conf新增选项：OJ_INTERNAL_CLIENT=1
06-16 | 更新 | 允许使用"tpj"作为文件名，命名一个基于testlib.h的spj，当"tpj"文件存在时，优先用tpj进行特判。	
06-12 | 更新 | gcc/g++ 优化级别可配置，默认-O2,允许用OJ_CC_OPT进行覆盖。
06-06 | 更新 | Ubuntu20.04的机器上，让C的标准升级为C17，允许用OJ_CC_STD进行覆盖。
06-05 | 更新 | Ubuntu20.04的机器上，让C++的标准升级为C++17，允许用OJ_CPP_STD进行覆盖。
05-02 | 补丁 | 禁止查看进行中的比赛所用的题目在比赛之前提交的源码，避免训练中偷懒复制老代码。
04-08 | 更新 | 增加可选的docker作为judge_client外部容器，以增强安全性。[参考用法](https://github.com/zhblue/hustoj/blob/master/wiki/FAQ.md#python%E5%88%A4%E9%A2%98%E5%A5%BD%E6%85%A2%E5%A5%BD%E6%85%A2%E5%A6%82%E4%BD%95%E5%8A%A0%E9%80%9F)
03-26 | 更新 | 增加权限类型VIP,拥有VIP权限的账户，可以参加所有标题含`[VIP]`标记的私有比赛。
03-08 | 补丁 | 修复在Ubuntu20.04上运行sqlite3
02-06 | 更新 | 新的模板 [`mdui`](https://github.com/zhblue/hustoj/pull/742) 基本可用，如需启用新模板，只需修改 `/home/judge/src/web/include/db_info.inc.php` ，设置 `$OJ_TEMPLATE="mdui";` 即可。*如需内网使用，请在 `/home/judge/src/web/include/db_info.inc.php` 末尾添加 `$MDUI_OFFLINE=true;` 即可。* (Author: [@renbaoshuo](https://github.com/renbaoshuo))
01-01 | 更新 | 新的模板 [`syzoj`](https://github.com/zhblue/hustoj/pull/722) 基本可用，如需启用新模板，只需修改 `/home/judge/src/web/include/db_info.inc.php` ，设置 `$OJ_TEMPLATE="syzoj";` 即可。 (Author: [@renbaoshuo](https://github.com/renbaoshuo))

</details>

<details>
<summary><b>2020年</b></summary>

日期   | 类型 | 更新内容
----- | :--: | :-------
12-30 | 更新 | 新版 wiki 已经迁移至本仓库，可通过 <https://zhblue.github.io/hustoj/> 访问。
12-29 | 更新 | 导入导出FPS(xml)时，增加文件名，默认排序。
12-28 | 更新 | 增加手工指定测试数据分值的特性，文件名test01[60].in 代表1号数据60分。
12-27 | 补丁 | 修补龙芯上因为系统调用而提前超时的问题。
12-21 | 补丁 | 修补手工添加题目失败的问题。
12-07 | 更新 | HTTP判题机可以通过账号的problem_start/problem_end限制其领取任务的题目号范围，配合judge.conf中的HTTP_DOWNLOAD=0可以让不方便更新判题数据的判题机发挥部分功效。
12月  | 喜讯 | star过2.0k!
11-30 | 更新 | 优化s树莓派4安装脚本，修补漏洞、合并关于下载排名文件的更新。
11-29 | 更新 | 优化输入数据提供方式，提高整体判题效率。
11-28 | 补丁 | 修复18.04以上系统里C++编译错误，对C/C++输出中文尝试支持。
11-22 | 补丁 | 修复部分RuntimeError, 更合理的限时控制。
09-23 | 更新 | 针对Github国内访问缓慢，安装脚本SVN超时的情况进行了安装脚本优化，解决了18.04/20.04安装失败的问题。
09-20 | 补丁 | 修复私有比赛题目不正确列出的问题。
08-08 | 补丁 | 增加了环境"PYTHONIOENCODING=utf-8"，修复Python3环境下不能输出中文字符的问题。
07-13 | 更新 | 允许长时间维持登录状态,管理员可自定义维持时间. 开启方式:修改 `/home/judge/src/web/include/db_info.inc.php`,设置 `OJ_COOKIE_LOGIN=true;`,自定义`OJ_KEEP_TIME`为**自最后一次登陆起**最长允许保持登录的时间
07-12 | 更新 | 允许在WA掉的时候，ShOW_DIFF打开的情况下，下载出错的一组测试数，zip方式打包.in/.out文件
02-10 | 更新 | 新的模板 `bshark` 基本可用，如需启用新模板，只需修改 `/home/judge/src/web/include/db_info.inc.php` ，设置 `$OJ_TEMPLATE="bshark";`
01-31 | 更新 | [@melongist](https://github.com/melongist) 增加了很多页面美化。
01-27 | 更新 | 题目限时增强为浮点型，3位小数精度，即标称毫秒(ms)。
01-26 | 更新 | 允许为每个Web添加多个UDP通知对象，每个判题服务器允许使用不同的UDP端口监听消息。阿里云+腾讯云测试通过。
01-23 | 更新 | 修订了[Moodle集成代码](https://github.com/zhblue/hustoj/blob/master/wiki/MoodleIntegration.md)，实现HUSTOJ给moodle系统作业自动判分。
01-20 | 更新 | 删除 `noip` 模式比赛的多余提交记录，允许自定义 `noip` 关键词，增加 `privilege` 表 `user_id` 索引。

</details>

<details>
<summary><b>2019年</b></summary>

日期  | 类型 | 更新内容
----- | :--: | :-------
12-19 | 更新 | 增加了 `judge.conf` 中的注释，提供了备案号变量 `$OJ_BEIAN` ，对系统判题时间分辨率进行了更新优化，提高灵活度。
11-23 | 喜讯 | `hustoj` 在首届深度软件开发大赛中获得**三等奖**。
11-21 | 补丁 | 修复比赛中点击 `Edit` 按钮后可以选择出题人禁用的语言提交【感谢湘潭大学谢老师的报告】。
11-20 | 更新 | 在运行结果对比输出（`OJ_SHOW_DIFF`）中提示每个数据点的结果(AC/WA/TLE...)。
11-16 | 优化 | [@muzea](https://github.com/muzea) 开发了从 GitHub 到 [Gitee](https://gitee.com/zhblue/hustoj) 的同步机制，并部署了CI。
11-13 | 更新 | 在运行时错误(RuntimeError)中显示数据点文件名(infile)
10-30 | 更新 | 提供 `$OJ_OI_MODE` 开关。
10-29 | 更新 | 加强了 `OI` 模式下的限制，控制 `Web` 行为。
10-03 | 更新 | 修订测试 `deepin 15.11` 安装脚本
10-03 | 补丁 | 注册页面验证 `csrf`
09-23 | 补丁 | 修复昵称比赛中不更新问题，以及提醒官方群用户及时更新处理504超时问题。
09-21 | 补丁 | 修复部分安装脚本不能执行第二次的问题
08-06 | 更新 | 支持用UDP数据包触发判题轮询，实现Web本地judge秒判。
07-26 | 更新 | 支持华为鲲鹏服务器，aarch64，感谢深度科技公司和华为云提供鲲鹏服务器。
07-06 | 更新 | 对于标题带有 `NOIP` 字样的比赛，比赛结束后才能看到结果。
07-04 | 更新 | 设置 `$OJ_MARK="mark"` 显示得分，`$OJ_MARK="percent"` 显示错误率(WA)或通过率（AC），设置 `$OJ_MARK=""` 只显示最终结果。
06-24 | 文档 | 对项目首页进行分块标注，调整顺序和内容，增加目录。
06-12 | 更新 | 添加 `Fortran` 语言、`Matlab(Octave)`，修订：比赛结束后编辑时丢失提交统计数据、修复部分RE。
05-18 | 修订 | 16.04以上版本FB显示异常。 [基于OpenJudger的Windows集成便携版](https://github.com/Azure99/WinHustOJ/releases) [浙传网盘](https://pan.cuz.edu.cn:8443/share/b02149ee631b2776e93590b461)
05-17 | 修订 | 改善ajax，减少并发量，降低web压力，提高judge轮询效率。
05-15 | 修订 | 修复了部分TLE误判为RE的情况，主要是在Ubuntu18/19 Deepin15.9/15.10 以上的版本，估计与gcc/g++有关。
05-07 | 更新 | [@muzea](https://github.com/muzea) 提供了 Debian 安装包打包(`*.deb`)， <https://github.com/zhblue/hustoj/releases>
04-13 | 更新 | 支持 SQL 判题，基于 `SQLite3` ，支持龙芯3A3000（致谢江苏航天龙梦信息技术有限公司提供龙芯主机！）。
03-14 | 更新 | 主线支持  树莓派(arm)  <b>龙芯(loongson-2f)</b>  i386 x86_64 

</details>

## 安装说明

### 视频教程

Ubuntu 18.04 安装 (https://www.bilibili.com/video/BV1Mp4y1C7Xx)

### 注意事项

根据你选择的发行版不同，从下面三个脚本里选一个来用。

**不要相信百度来的长篇大论的所谓教程，那些都是好几年前的老皇历了，会导致不判题，不显示，不好升级等等问题。**
	
尤其**别装** `Apache` ，如果已经安装，请先停用或卸载，以免80端口冲突。

**不要** 使用 `LNMP` `LAMP` `Cpanel` 或其他面板程序提供的 `Mysql` `Nginx` `Apache` `PHP` 环境，安装脚本已经包含所有必须环境的安装。

**腾讯云用户请 [换软件源](https://developer.aliyun.com/mirror/ubuntu)** ，增加 `multiverse` 。

阿里云用户请百度 `阿里云 80端口`

### 基于 Ubuntu 22.04 安装
	
**仅支持原生Ubuntu系统，不支持WSL和docker中的Ubuntu系统**

**建议服务器配置双核2G内存以上**
	
```bash
wget http://dl.hustoj.com/install-ubuntu22.04.sh
sudo bash install-ubuntu22.04.sh
```

### 基于 Ubuntu 20.04 安装
	
**各类公有云首选, 最容易，成功率最高，近期部署数量最多，开发者原型机**
	
**仅支持原生Ubuntu系统，不支持WSL和docker中的Ubuntu系统**
	
**建议服务器配置单核2G内存以上**

```bash
wget http://dl.hustoj.com/install-ubuntu20.04.sh
sudo bash install-ubuntu20.04.sh
```
	
脚本运行完成直接浏览器输入ip地址即可访问，如不能打开请检查**访问策略**、**防火墙**设置是否打开80端口。
	
提醒：阿里云的 Ubuntu 20.04 预装了 `apparmor` ，小概率可能会造成 `systemd` 和 `umount` 进程卡CPU 100%
可能的解决方案1:安装docker(运行judge_client目录下的docker.sh)并启用OJ_USE_DOCKER=1
或2:[卸载阿里云盾](#卸载阿里云盾)。**

	
### 基于 Ubuntu 18.04 安装   即将脱离维护期，不推荐

```bash
wget http://dl.hustoj.com/install-ubuntu18.04.sh
sudo bash install-ubuntu18.04.sh
```
	
### 校园网安装

近期 `Github` 的 SVN 访问缓慢，可以到  [Releases](https://github.com/zhblue/hustoj/releases) 中下载 `tar.gz` 版本，然后用 `install` 目录下的 `*-bytgz.sh` 脚本安装。

但是注意这样安装的实例，将来升级时只能手工升级。

以 `Ubuntu 18.04` 为例：下载好 [Releases](https://github.com/zhblue/hustoj/releases) 中的 `Source code(tar.gz)`，然后准备好 `install-ubuntu18-bytgz.sh`

```bash
sudo bash install-ubuntu18-bytgz.sh 19.06.04.tar.gz
```
### 基于 Ubuntu 20.04+宝塔 安装
	
*先看*[宝塔系统安装HUSTOJ指南v0.2.docx](https://github.com/zhblue/hustoj/raw/master/docs/%E5%AE%9D%E5%A1%94%E7%B3%BB%E7%BB%9F%E5%AE%89%E8%A3%85HUSTOJ%E6%8C%87%E5%8D%97v0.2.docx)


	
```bash
wget http://dl.hustoj.com/install-ubuntu-bt.sh
sudo bash install-ubuntu-bt.sh
```	
	
	
### Ubuntu 更换软件源

下列两个脚本可以二选一，对于使用**腾讯云镜像**和**Ubuntu 原版镜像的用户**，推荐使用脚本二。

+ 脚本一

```shell
wget http://dl.hustoj.com/sources.list.sh
sudo bash sources.list.sh
```

+ 脚本二

```shell
wget http://dl.hustoj.com/update-sources-ubuntu.sh
sudo bash update-sources-ubuntu.sh
```
    
### 基于 Deepin 20+ 安装

国内桌面用户 `Deepin 20+` (内置QQ、微信、WPS方便出题人本地测试，最新20测试通过)

```bash
wget http://dl.hustoj.com/install-deepin20+.sh
sudo bash install-deepin20+.sh
```
	
### 基于 UOS 20+ 安装

国内桌面用户 `UOS 20+` (内置QQ、微信、WPS方便出题人本地测试，最新20测试通过)

```bash
wget http://dl.hustoj.com/install-uos20.sh
sudo bash install-uos20.sh
```
    
### 基于 CentOS 安装 CentOS发行策略改变，未来前景不确定，不推荐

假如你不得已非要用centos7 （有的语言可能不支持，但是某些机架式服务器的Raid卡Ubuntu不认只能装CentOS），可以用下面脚本快速安装OJ：  

```bash
wget https://raw.githubusercontent.com/zhblue/hustoj/master/trunk/install/install-centos7.sh
sudo bash install-centos7.sh
```

REDHAT / CentOS 用户请浏览 

<https://github.com/zhblue/hustoj/blob/master/wiki/CentOSx86_64.md>

<https://github.com/zhblue/hustoj/blob/master/wiki/CentOS.md>


### 基于 Docker 安装

基于 Docker 安装，可用于快速体验 HUSTOJ 的全部功能，**可能存在未知的魔法问题，请慎重考虑用于生产环境！！！**

使用构建好的 Docker 镜像（GitLab CI/CD系统自动构建）

```shell
docker run -d           \
    --name hustoj       \
    -p 8080:80          \
    -v ~/volume:/volume \
    registry.gitlab.com/mgdream/hustoj
```

由于 Web端/数据库/判题机 全部被打包在同一个镜像，无法扩展，不推荐使用此镜像做分布式判题，另外请不要在 Docker 中使用 SHM 文件系统，会由于内存空间不足无法挂载沙箱环境而导致莫名其妙的运行错误

部署后使用浏览器访问 <http://localhost:8080>

### 基于Docker安装（分布式）

Docker分布式改造基本完成，目前支持web/mysql/judge基础镜像，支持使用环境变量进行配置。
目前judge镜像仍处于不稳定状态，有能力的用户对`docker/judge`进行完善。

在本地执行前需要先创建Docker网络`docker network create hustoj`，使用下面的命令来运行对应的服务。

- MySQL服务

```shell script
docker run -d \
    --network hustoj \
    --name hustoj.mysql \
    -e MYSQL_USER=<mysql_username> \
    -e MYSQL_PASSWORD=<mysql_password> \
    -v mysql:/var/lib/mysql \
    registry.gitlab.com/mgdream/hustoj:mysql
```

基础镜像为mysql:5.7，所有的环境变量都继承自[mysql:5.7](https://hub.docker.com/_/mysql)官方镜像，默认提供数据库为`jol`。

- Web服务

```shell script
docker run -d \
    --network hustoj
    --name hustoj.web \
    -e DB_HOST=<mysql_server> \
    -e DB_NAME=<mysql_database> \
    -e DB_USER=<mysql_username> \
    -e DB_PASS=<mysql_password> \
    -v data:/home/judge/data \
    -p 80:80 \
    registry.gitlab.com/mgdream/hustoj:web
```

基础镜像为ubuntu:18.04，使用php版本为php7.2，所有的环境变量都继承自db_info.inc.php文件，后续会完善php与nginx的环境变量配置。

### 基于其他发行版安装

其他的发行版，如Debian10+(Debian10/11) 树莓派的 `raspbian8/9` , `ubuntu14.04`的安装脚本在 `install` 目录可以找到，但是可能存在少量细节不完善，安装后需要部分手工修复调整。

<https://www.youtube.com/watch?v=hRap7ettUWc>

树莓派用户请用 `rpi` 分支源码（实验性质）手工搭建 `web` ，并编译安装 `core` 目录下的 `judged` 和 `judge_client` 。

[更多安装方法](https://github.com/zhblue/hustoj/blob/master/trunk/install/README)


### LiveCD下载安装

Linux不熟悉的用户推荐使用:

HUSTOJ_LiveCD(发送"livecd"到微信公众号 `onlinejudge` ，获得百度云下载链接)

HUSTOJ_Windows（仅支持XP,QQ群23361372共享文件）进行安装。

使用说明见iso中README,也可以参考[LiveCD简介](https://github.com/zhblue/hustoj/tree/master/wiki/HUSTOJ_LiveCD.md)  

Linux新手请看[鸟哥的私房菜](http://cn.linux.vbird.org/linux_basic/linux_basic.php)

建好系统需要题目，请访问[TK题库](http://tk.hustoj.com/) 和 [freeeproblemset项目](https://github.com/zhblue/freeproblemset)

### 卸载阿里云盾

逐条执行下列代码删除阿里云盾：

```
# 卸载云盾
wget http://update.aegis.aliyun.com/download/uninstall.sh
chmod +x uninstall.sh
./uninstall.sh
wget http://update.aegis.aliyun.com/download/quartz_uninstall.sh
chmod +x quartz_uninstall.sh
./quartz_uninstall.sh
# 删除残留
pkill aliyun-service
rm -rf /etc/init.d/agentwatch /usr/sbin/aliyun-service
rm -rf /usr/local/aegis*
```

重启后若执行 `ps -aux | grep -E 'aliyun|AliYunDun'` 显示没有阿里云盾相关进程即为卸载成功。

## 装后须知

[Python重度用户注意查阅](https://github.com/zhblue/hustoj/blob/master/wiki/FAQ.md#python%E5%88%A4%E9%A2%98%E5%A5%BD%E6%85%A2%E5%A5%BD%E6%85%A2%E5%A6%82%E4%BD%95%E5%8A%A0%E9%80%9F)
--

常见问题自动应答微信公众号: `hustoj`
<img src="http://hustoj.com/wx.jpg" height="180">

关注后回复： 新装系统、升级、目录等关键词，系统会自动回复相关帮助。

有问题请先查阅
**[FAQ常见问答](https://github.com/zhblue/hustoj/blob/master/wiki/FAQ.md)** 和 **[Wiki使用技巧](https://github.com/zhblue/hustoj/tree/master/wiki)** 或使用搜索引擎。 

**安装完成，用admin作为用户名注册一个用户，自动成为管理员。**

大部分功能和选项的开关和参数调整都在配置文件中，安装后几个重要配置文件的位置如下：

路径                                                                                |  内容
----------------------------------------------------------------------------------- | ----------------------------
`/home/judge/etc/judge.conf`                                                        |  判题 `judged` `judge_client`
`/home/judge/src/web/include/db_info.inc.php`                                       |  Web
`/etc/php5/fpm/php.ini` 或 `/etc/php7.0/fpm/php.ini` 或 `/etc/php.ini` (in Centos7)  |  php
`/etc/nginx/sites-enabled/default` 或 `/etc/nginx/nginx.conf` (in Centos7)           |  nginx
    
如果用户量比较大，报 `50x` 错误，可能需要修改 `/etc/nginx/nginx.conf` 中的设置：

```conf
	worker_processes 8;    #其中数字8可以取CPU核心数的整数倍。
	events {
		worker_connections 2048;
		multi_accept on;
	}
```
如果遇到比赛人数多，比赛排名 `xls` 文件无法下载，请修改 `/etc/nginx/sites-enabled/default` ，在 `fastcgi_pass` 一行的后面增加

```
 	fastcgi_buffer_size 128k;
        fastcgi_buffers 32 32k;
```
保存后，重启 `nginx`

## 备份

脚本安装的用户，可以使用 `install` 目录中的 `bak.sh`进行备份。

```
sudo bash /home/judge/src/install/bak.sh
```

备份后的数据在 `/var/backups/` 目录下, 命名格式为 hustoj_%Y%m%d.tar.bz2。

百度学习crontab的用法后，可以使用 `sudo crontab -e` 定制自动备份计划，部分安装脚本中包含了自动备份，但可能需要运行上面的语句一次来激活。

## 迁移到CentOS
如果你需要进行跨系统迁移（如从 Ubuntu 迁移到 CentOS ），可以尝试使用下面的脚本backup+.sh进行备份, 对应的*.tar.gz，备份的文件需要用restore+.sh还原。

```shell
sudo bash /home/judge/src/install/backup+.sh  #备份后的归档在 `/home/judge/backup` 命名格式为 +%Y-%m-%d-%H-%M-%S.tar.gz
```


## 迁移

首先在新服务器上做全新安装和测试，没有问题后，再迁移数据。

将你需要迁移的归档复制到目标系统的`/home/judge/backup`目录下，执行下面的脚本进行恢复

```shell
cd /home/judge/backup
sudo bash /home/judge/src/install/restore.sh hustoj_%Y%m%d.tar.bz2
```
脚本的第一个参数为恢复的目标归档，如果没有参数则默认为按名字排序后字典序最大的归档

*如果是backup+.sh备份的.tar.gz文件，用restore+.sh还原。
```shell
cd /home/judge/backup
sudo bash /home/judge/src/install/restore+.sh +%Y-%m-%d-%H-%M-%S.tar.gz
```

## 更新升级

脚本安装的用户，可以使用 `install` 目录中的 `update-hustoj` 进行更新升级。

```
sudo bash /home/judge/src/install/update-hustoj
```

升级脚本执行后，可能需要登陆web端管理后台，执行一次更新数据库。
	
* hustoj开源版的所有历史版本，只要没有对数据库结构进行改动，都可以无损升级到最新版本，包括10年以上历史的早期版本。
* 如果老系统更新有疑问，随时加官方群咨询群主。

## 修复

自己不小心改坏了 `web` 代码，可以使用 `install` 目录中的 `fixing.sh` 进行系统修复。
```
sudo bash /home/judge/src/install/fixing.sh
```

## 支持捐助、加入社区

使用上需要帮助，请加用户交流 QQ 群 `23361372` ，验证问题答案：`【学校、公司、机构】姓名`。

或加[TG](https://t.me/hustoj2019)群。

群共享有题库、安装盘、文档 ，群内可以讨论、答疑 。
新加群，请改群名片，5分钟后可以发言。
请尊重开源软件开发者的辛苦劳动，出言不逊者将被踢出。

您可以用这几种方式支援本项目：

1、领取并使用支付宝红包

<img src="http://tk.hustoj.com/upload/image/20180621/20180621190059_62537.png" width="140px" />

2、在 [TK题库](http://tk.hustoj.com) 充值下载题目

3、右上角点击Star，给本项目加星

4、保留您安装使用的系统中页脚的公众号和红包二维码

5、在您的论文中引用本项目的网址

6、向其他老师同学推荐本项目

## 系统演示

[前台演示](http://hustoj.com/oj/)
[龙芯部署](http://loongson.hustoj.com/)

## 后台功能

<img src="https://raw.githubusercontent.com/zhblue/hustoj/master/wiki/menu.png" />

## 硬件需求

x86 arm mips 架构处理器， 1G以上内存，10G外部存储。

[阿里云](https://www.aliyun.com/)，[腾讯云](https://curl.qcloud.com/kevnXODi)，[华为云](https://activity.huaweicloud.com/)，最小学生机均可稳定运行。

<img src="https://raw.githubusercontent.com/zhblue/hustoj/master/wiki/hardware.png" />

更严谨的请求数 QPS 测试,请参考 [@muzea](https://github.com/muzea) 的 [HUSTOJ web 跑分小工具](https://github.com/muzea/hustoj-benchmark) 。

## 免费题库

访问项目[FPS](https://github.com/zhblue/freeproblemset/tree/master/fps-examples)下载免费例程。

访问[TK题库免费专区](http://tk.hustoj.com/problemset.php?search=free)

FQ访问[谷歌代码存档版](http://code.google.com/p/freeproblemset)，下载老版本 FPS 共享题库。
	
	
## 推荐云服务商
[搬-瓦+工](https://bandwagonhost.com/aff.php?aff=67213)
[UCloud年度大促](https://www.ucloud.cn/site/active/kuaijie.html?invitation_code=C1x6A291CBB02E8)
[快杰云主机推广](https://www.ucloud.cn/site/active/ohost.html?invitation_code=C1x6A291CBB02E8)
	
## 推荐开源IDE
[小熊猫](https://github.com/royqh1979/RedPanda-CPP/releases)
