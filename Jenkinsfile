node {
  stage('Build') {
    withEnv(["WORKSPACE=${pwd()}"]) { //Setting Workspace to the current directory
        stage('Clone repository...') {
            checkout scm //Let checkout automagically handle pulling in all the names we need and whatnot  
      }
    }
  }
  stage('Test') {
    withEnv(["WORKSPACE=${pwd()}/Unit_Test_Example/build/test/"]) { //Setting Workspace to the current directory
      stage('Run Unit Tests') {
        ctest arguments: 'ctest', installation: 'cmake', label: 'cmake'
     }
      
  } }
  stage('Deploy') {
    echo 'Deploying....'
} }
