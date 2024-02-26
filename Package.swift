// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "shared",
    platforms: [.iOS(.v13)],
    products: [
        .library(name: "shared",targets: ["shared"]),
        .library(name: "chatcone_ios_dependency",targets: ["chatcone_ios_dependency"]),
    ],
    dependencies: [
        .package(url: "https://github.com/socketio/socket.io-client-swift.git", from: "16.0.0"),
    ],
    targets: [
        .binaryTarget(name: "shared", path: "./shared.xcframework"),
        .binaryTarget(name: "chatcone_ios_dependency", path: "./chatcone_ios_dependency/chatcone_ios_dependency.xcframework"),
    ]
)

