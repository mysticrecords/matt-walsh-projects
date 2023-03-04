pipeline {
    agent any

    stages {
      stage('Build') {
        steps {
          echo 'Building..'
          }
        }
        stage('Test') {
          steps {
            echo 'Testing..'
              withEnv(["WORKSPACE=${pwd()}/Unit_Test_Example/build/test/"]) { //Setting Workspace to the current directory
                stage('Run Unit Tests') {
                  steps {
                    ctest arguments: 'ctest', installation: 'cmake', label: 'cmake'
                  }  
                }
              }
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}
