/*↓編集テストするときはこの辺使ってね

はい
今日もいい天気です
test
*/

//おはよう世界
//	編集できました。。。
//test
//

/*
Githubの使い方

	http://codezine.jp/article/detail/8436?p=3
	↑参考サイト



	組織への招待のされ方

		Githubでアカウントを作ったら，アカウント名を管理者とかに伝える

		その人が組織に招待してくれるのを待つ

		招待してくれたら，ブラウザからログインした状態でその組織を開く
		https://github.com/HORIOJAPAN

		上のほうに「View invitation」が出るからクリックする

		「Join」する

		


	最初に

	VisualBasic2013で「チームエクスプローラ」を表示する．
	（↑ソリューションエクスプローラとかのとこ）
		（↑ない場合はファイルとかの列の「表示（V)」（Alt+[V]）から開ける）


		VS2013Proのインストールについては学生アカウントの認証からPro版をダウンロードしてもいいけど，

		OneDriveの「つくばチャレンジ資料」内に

		「ja_visual_studio_professional_2013_with_update_4_x86_web_installer_5921046.exe」
		
		があるからそれを開くとインストールできるよ

		インストールに1時間ぐらいはかかると思っておく
		

	VSのライセンス認証

		Proはインストールしただけだと，試用版としての扱いになり，90日後に動かなくなる

		継続して使うには学生認証により永久ライセンスを得て，プロダクトキーを入力しなければならない



		https://www.dreamspark.com/student/default.aspx
		↑からDreamSparkのアカウントを作成する

		ソフトウェアカタログの
		https://www.dreamspark.com/Student/Software-Catalog.aspx
		から「Visual Studio Professional 2013 with Update 4」を開く

		「キーを入手」するとプロダクトキーが生成される（webインストーラも通常も同じ）

		あるいは，
		https://www.dreamspark.com/Account/MyAccount.aspx
		↑のマイアプリケーションからキーが見られる

		プロダクトキーはVSの「ファイル」から「アカウントの設定」にて入力する





	導入編

		「チームエクスプローラ」の中の「接続」のタブを開く

		「ローカルGitリポジトリ」の「複製▼」で黄色いところに↓
		https://github.com/HORIOJAPAN/GithubTeamTest.git
		↑をコピーする

		「複製」する（ローカル側のディレクトリは何でもよい）

		「接続」のローカルGitリポジトリに複製したリポジトリが表示されるのでダブルクリック

		「ホーム」の「ソリューション」にリポジトリのソリューションファイルが表示されるのでダブルクリック

		「ソリューションエクスプローラ」からソースファイルなどが開けるようになる





	ログイン編

		「チームエクスプローラ」の「設定」から「Git」「Git設定」

		から「グローバル設定」にてGithubで登録したユーザ名・アドレスを入力

		「更新」





	☆編集する前に

		編集を始める前に必ず同期すること！

		各種設定が完了してソリューションの複製がローカルに保存されている状態で

		同期しないまま（最新のソースコードではないまま）コードを編集をすると，
		
		ほかの人と編集の競合が発生する可能性があります

		それを防ぐために必ず同期（プルのみでもよい）をしてください

		そして，パブリックな最新版に対して編集をするよう心がけてください


		競合が発生した場合のマージについては後で触れます




	編集（コミット）編

		「ソリューションエクスプローラ」から↓
		GithubTest＞ソースファイル＞Source.cpp
		（リポジトリのディレクトリ的にはGithubTeamTest/GithubTest/Source.cpp）
		↑を開く

		このソースコードが開けるはず

		コードの最初の方に何かコメントアウトした状態で追記してみる

		ここまではローカルでの編集

		サーバにアップロードする場合は「コミット」して「同期」する必要がある

		「チームエクスプローラ」の「ホーム」から「変更」タブを開く

		＜コミットメッセージを入力してください＞の欄に文字を入力
		（↑あいｌｇｖなうえｒｇｖじおｊ）（改行できるよ）

		「コミット」→「同期」
		（コミットボタンの右の「▼」で「コミットして同期」だと一発！）
		（↑「コミットしてプッシュ」でもいいが，それだとプルできないと思う）

		最初のプッシュのタイミングでGithubのアカウント名とパスを求められるので、入力する

		コミットできてるか不安ならウェブブラウザで確認↓
		https://github.com/HORIOJAPAN




	競合が発生したときのマージについて

		編集する前に同期しても，編集前の最新版と編集後同期前の最新版が同一とは限らない

		その場合，編集の「競合」が発生したことになる

		競合が発生すると，どのコード（ほかの人のコードと自分のコード）を最新版とするかが問題となる

		そのため，どちらかを最新とするのではなく，多くの場合は
		
		それぞれの編集した内容をマージ（合体）させたものを最新とすることになる


		同期しようとした場合に競合が生じているとき，VisualStudioが自動的にマージを提案してくれる

		「マージする」を押すとマージした場合の結果を提案される

		これはマージ結果の確定版ではないので，必要に応じて編集してから「マージを許可」

		マージを許可した後にコミットして同期すると，マージした結果でコミットできる
		

		複数人でコードの違う部分を編集する場合，競合を防ぐため事前にフォーク（分岐）する




	専門用語とかわかんないときは

		サルでもわかるGit入門
		http://www.backlog.jp/git-guide/

		でも読んでみて


		



	ブラウザのソースコード画面の使い方
		
		コードを開いた上で
		
		「Raw」でテキストデータ状態のコードを表示できる

		「Blame」で部分ごとに編集したアカウントを見られる（責任の所在）

		「History」で編集履歴が見られる
		コミットコメントと編集アカウント，経過時間など
		右の＜＞マークでその時点でのコードが閲覧できる




	リポジトリの作り方

		まず，ブラウザでGithubを開き，右上の「＋▼」から「New repository」で新しくリポジトリを作る

		「Owner」にてリポジトリを作成する場所（個人アカウント内か組織内か）を選び，

		「Repository name」に適当なリポジトリ名を入力して「Create repository」をクリック
		（基本的に設定はそのままでいい．「Public」で作成する）

		作成されたらHTTPSのURLがコピーできる状態にしておいてVS側の設定に移る


		VSでリポジトリに入れたいソリューションファイルを開く

		ソリューションエクスプローラからソリューションを右クリック

		「ソリューションをソース管理に追加」から「Git」に設定

		チームエクスプローラの「同期されていないコミット」から「リモートリポジトリに発行」の

		「空のGitリポジトリのURLを～」の欄に作成したリポジトリのURLを入力して「発行」する

		「同期されていないコミット」からメッセージを添えて「コミット」して「同期」すると

		リポジトリにソリューションが反映され，リポジトリの作成が完了する




	履歴から過去のコードを復旧させたいとき

		チームエクスプローラの「変更」から「コミット」の横の「操作▼」から「履歴の表示」

		元に戻したい（復旧したいコードの）バージョン（コミットID）をダブルクリック

		チームエクスプローラの「コミットの詳細」から「元に戻す」

		元に戻しますかのメッセージに「はい」

		「競合の解決」から「競合」の項目をクリックし「ファイルの比較」か「マージ」

		「マージ」にて差分の左に出る「チェックボックス」で希望のマージ結果を調整する

		マージしたい結果になったら左上の「マージの許可」

		「競合の解決」で「残りの競合はありません」になっているのを確認して「元に戻すをコミット」

		コミットメッセージを入力して「コミット」して「同期」


		ただし，「元に戻す」と編集履歴が複雑になるので，極力避けること！

		作業が終わったら「相違点」や「履歴」のタブは閉じてよい



	フォークしたブランチをVSで表示する

		masterから分岐（フォーク）したブランチはデフォルトではVSで表示されない

		ブランチを表示したい場合はチームエクスプローラの「分岐」から「新しい分岐」

		で「master▼」をクリックして表示したいブランチを選択

		「分岐の作成」でローカルの「発行された分岐」に表示されるようになる

		「発行された分岐」から表示したい分岐をダブルクリックすると切り替えられる

		ただし，切り替える前のブランチにコミットしていない変更がある場合は切り替えられない




*/
