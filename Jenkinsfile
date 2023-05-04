pipeline {
    agent any

    stages {
        stage('Unit Tests') {

            steps {
          
                tool name: 'cmake', type: 'hudson.plugins.cmake.CmakeTool'

                dir("${env.WORKSPACE}//Unit_Test_Example/build/test/"){
                
                junit '**/*.xml'
                }
            }
        }
        stage('Functional Tests') {
            
            steps {
          
                tool name: 'cmake', type: 'hudson.plugins.cmake.CmakeTool'

                dir("${env.WORKSPACE}//Unit_Test_Example/build/test/"){
                
                junit '**/*.xml'
                }
            }
        }
        stage('Automated Tests') {
            
            steps {
          
                tool name: 'cmake', type: 'hudson.plugins.cmake.CmakeTool'

                dir("${env.WORKSPACE}//Unit_Test_Example/build/test/"){

                    enter a mistake to show failing test report in GitHub
                
                junit '**/*.xml'
                }
            }
        }
    }
}





// pipeline {
//     agent any

//     stages {
//       stage('Build') {
//         steps {
//           echo 'Building..'
//           }
//         }
//         stage('Test') {
//           steps {
//             echo 'Testing..'
//               withEnv(["WORKSPACE=${pwd()}/Unit_Test_Example/build/test/"]) { //Setting Workspace to the current directory
//                 stage('Run Unit Tests') {
//                   steps {
//                     ctest arguments: 'ctest', installation: 'cmake', label: 'cmake'
//                   }  
//                 }
//               }
//             }
//         }
//         stage('Deploy') {
//             steps {
//                 echo 'Deploying....'
//             }
//         }
//     }
// }
