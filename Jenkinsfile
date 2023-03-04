node {
  stage('Build') {
    withEnv(["WORKSPACE=${pwd()}"]) { //Setting Workspace to the current directory
        stage('Clone repository...') {
            checkout scm //Let checkout automagically handle pulling in all the names we need and whatnot
          
  }
  stage('Test') {
      
  ctest arguments: 'ctest', installation: 'cmake', label: 'cmake', workingDir: '/Unit_Test_Example/build/test/'

  }
  stage('Deploy') {
    echo 'Deploying....'
} }