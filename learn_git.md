	
##### 学习git的笔记 主要参考[git Pro](https://progit.bootcss.com/)中文书 及 [廖雪峰的git教程](https://www.liaoxuefeng.com/wiki/0013739516305929606dd18361248578c67b8067c8c017b000)

 __建立本地仓库__  __基本开发__  __git的一些指令__  __分支操作__  __pull fetch merge__  __log 的一些参数__  __tag的一些使用__  __...__  __基础git__  

#### 1.本地建立仓库	
>+ git init      # 初始化一个git仓库（ 如果 有加global就是全局变量），没有仓库就新建，原本有仓库就重新初始化 （正常是先建一个文件夹，然后在文件夹里面初始化git仓库，即在文件夹里面生成一个.git的隐藏文件夹，可以通过 ls -			a 看到）
>+ git config --global user.name "name"	# 去掉global就是给本地的一个git 仓库起名字
>+	git config user.email "my email"	# 添加邮箱
>+	git config --list			# 查看git的设置
>+	git help 				# 获得git help 
>+	git help 特定指令 （git help add ）	# 获得git某个特定指令的帮助
-------------------

##### 2. 基本开发
 >1. git clone + url         (将东西先copy下来) 如果本地有就直接用 git pull origin develop 先更新本地的，然后git merge develop合并分支
 >2. git branch feature/xx   创建feature分支进行开发
 >3. git add xx  git commit -m "" 不要忘记用git status  看一下提交状态
 >4. git push origin feature/xx   提交到远程，然后 MR
 
 >出现问题时，从master下来一个峰值，然后直接建立一个hotfix的分支，修改完之后就push上去提MR，详情可以参照[git-flow](http://danielkummer.github.io/git-flow-cheatsheet/)开发流程
---------------------------------
    
##### 3.git的一些指令
>+ git add . 添加所有的文件（当然后面也可以一个一个添加或者是用__空格__隔开一次添加几个）
>+ git reset HEAD 撤销所有add的文件，具体某几个就直接在后面加上文件名，用__空格__或者逗号隔开
>+ git ls-files 查看已提交的文件
>+ git rm 文件名  删除本地仓库的某个文件，后面还需要用commit提交一下
>+ git mv oldName newName    用于修改本地仓库的文件名，后面还需要用commit提交一下
>+ git checkout -- 文件名 撤销在工作区的修改(如果要撤销的文件和分支名不冲突，可以省略 -- )
>+ git reflog  查看历史版本 配合 git reset --hard 历史版本 回到指定的历史版本（本地数据会被销毁）
>+ git remote -v 这个命令可以显示对应项目的远程克隆地址

>+ status add commit push 等就不多说了
-------------

##### 4. 分支操作 
>+ git branch 查看（本地分支）分支    git branch -r 查看远程分支
>+ git branch feature/cqx 创建分支（分支名为feature/cqx）
>+ git branch -d 分支名    删除（本地分支）分支  git push origin --delete 分支名 删除（远程分支）分支
>+ git branch -m oldName newName 修改分支名 
>+ git checkout feature/cqx 切换到分支名为feature/cqx  (相当于从本地仓库下拉代码到本地工作区中)
>+ git checkout -b feature/cqx 创建分支feature/cqx，并且切换到此分支上
>+ git push origin feature/cqx 将分支推到远程分支feature/cqx上
-------------

##### 5. pull fetch merge
>+ git pull origin develop 取回远程develop分支，然后和本地分支合并（可能会出错）
>+ git fetch 将远程分支下拉到本地仓库（但是要使用merge才可以看见，直接使用 git merge）
>+ git merge xx   将xx分支合并到当前的分支 (不加参数是fetch之后从merge到本地仓库和本地工作区)

------------------
merge的机制：
1 当前master分支比远程的master分支要超前1个提交

2 多人协作出现先后提交,修改代码有重叠部分是就会出现冲突

发生冲突之后，使用git status就可以查看是那些文件冲突了，而且会帮你标记是上了。

rebase不要谁便用，容易发生冲突。因为是将你的分支接到master分支后面，即你的分支就是master分支，这时候要是有别人也在master上开发，push的时候就会发生冲突了
*************************

##### 6. log 的一些参数

>+ git log --graph --oneline -- decorate  Graph是绘制一个ASCII图像来展示 oneline是格式化，decorate是可以看出是哪一个分支提交的
>- git log --stat 显示每次提交文件增删数量
>- git log -p 具体列出两次提交的区别，增加了那些，删除了那些
>- git log -3 显示最近的3条操作
>- git log --after="yesterday" 
>- git log --after="2014-7-1" --before="2014-7-4" 按日期筛选
>- git log --author="John" 按作者（支持正则，会筛选出含John的作者）
>- git log -- foo.py bar.py 根据文件（-- 标示接下来的是文件路径，不是分支名，如果不冲突的话可以省略）
>- git log -S "Hello, World!" 按提交内容
>- git shortlog 根据发布者来分类， 加上 -n 可以按提交数量来排序

************************

##### 7. tag的一些使用
>- git tag -l 查看 本地分支标签 或者是使用 --list也可以
>- git ls-remote --tags 查看远程所有标签 或者使用 --tag也可以
>- git tag  v1.0.0 打tag，版本号一般使用三段式 vX.X.X，即前缀 + 大版本 + 小版本 + 修订版本，例如 v1.2.0，[版本参考](https://semver.org/lang/zh-CN/)
>- git tag  v1.0.0 039bf8b   给某一个commit打标签
>- git tag --delete v1.0.0 删除标签  也可以换成 -d --d都是一样
>- git push -d origin v1.0.0  删除远程的某个标签
>- git show v1.0.0  查看某一个标签的提交信息
>- git push origin tagname 上传一个   上传所有tag: git push origin --tags 默认是不上传的

 **************************

##### 8 错操作
> 比如 删除本地的A文件，修改了B文件，然后push到远程，然后继续修改B文件上传，这个时候提MR被打回，要你恢复A文件再把修改好的文件B一起提MR。

做法：
>+ 先 git reset 删除A文件__前__一个版本（默认是使用soft，不要使用hard，可能会有数据丢失）
>+ 然后 git checkout -- A文件 
>+ 然后 add B 文件 commit push
>+ 会发现push失败，先检查是否文件已修改好，是的话，功能是否已实现，删除远程分支，然后再把本地分支push（必须先检查好）

##### 基础git
>
		回顾 - git工作区域: 

				4 git remote              # 远程仓库

				3 git reponsitory 		  # 本地仓库：  最后确定的文件保存到仓库成为一个新的版本，并且对他人可见（即git init 创建的仓库）

				2 staging area (index)    # 暂存区： 暂存已经修改的文件

				1 working directory       # 工作区： 编辑，修改文件  
************************

	实例： 比如在working directory ，我们创建了 spider.py 和readme.md 这两个文件，


	第一步：先在working directory 的目录下，输入 git status 查看当前 git当前的状态，会看到在Untracked files(未被追踪的文件):多了spider.py 和readme.md

	第二步：使用 git add spider.py 和 git add readme.md  将 这两个文件添加到 暂存区域(staging area) ，然后输入 git status 查看当前 git当前的状态
		(也可以直接以空格隔开，直接git add spider.py readme.md 就可以直接一次性添加2个指定的文件)

		git add .  后面加一个“.”，是匹配所有，提交新建文件或者是修改文件（不包括删除的文件）#后面再看一下网上的，比如liaoxuefeng和公司的，现在先按视频的走
		git reset HEAD	撤销所有add的文件
		

	第三步： git commit -m "这里是加注释的地方"	将暂存区的东西都添加到仓库(git reponsitory)里面去,-m 后面双引号里面是添加注释，输入 git status 查看当前 git当前的状态

		git log		可以输出 仓库提交的历史记录

	1～3： git commit -a -m "注释" 实现从 working 到 reponsitory ，中间存入暂存区域是自动完成的 [但是不会自动提交未追踪文件，新建文件还是必须按上面的流程]

------------------------

	查看提交的文件： git ls-files

	删除文件：
		1.删除本地文件： rm 文件名 
		2.从git中删除文件： git rm 文件名(文件依然记录在git历史中) 提交请求	git commit -m "delete 文件名" (只删除目前版本中的指定文件)

	重命名文件：
		1. git mv 原来文件名 改完后文件名
		2. git commit -m "xx文件名字发生改变，变为yy"  提交申请 
	
	查看修改后的文件和原来文件的不同：  git diff 

	回到上一个状态：[回到过去]
			git reset --hard HEAD^  (回到上上个版本 git reset --hard HEAD^^,回到100个版本之前 git reset --hard HEAD~100) (先用git log 确定自己要回到哪一个状态)   HEAD 是指向master的一个指针

	回到下一个状态：[回到未来]
			1. git reflog 查看历史版本，然后复制commit id(最左边的一个16进制的数字)

			2. git reset --hard c02d86b [c02d86b是commit id]      回到选择的历史版本去,这个是万能的，可以回到过去可以回未来，只要有commit id  

	从本地的仓库下载：  git chectout  文件名   注意：会将本地未保存的相同文件覆盖。

		
	撤销add提交的文件： git reset HEAD 文件名

	撤销在工作区域的修改： git checkout -- 文件名   （--记得加，不然意思截然不同），撤销是还原到上一次有add,或者是commit的操作，中间过程不记住。(误删也可以恢复)

	（修改然后add,在修改再add,重复3次，先用git reset HEAD 文件名，然后git checkout -- 文件名，是恢复到最开始的状态，即上次commit之后的状态，建议重要的更改一定要commit）


